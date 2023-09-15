%define _unpackaged_files_terminate_build 1

Name: baselib
Version: 0.0.1
Release: alt1

Summary: Common BaseALT projects library.
License: GPLv2+
Group: Other
Url: https://github.com/mchernigin/baselib

BuildRequires(pre): rpm-macros-cmake
BuildRequires: gcc-c++ cmake cmake-modules
BuildRequires: qt5-base-common qt5-base-devel qt5-declarative-devel qt5-tools-devel

Source0: %name-%version.tar

%description
Common BaseALT projects library

%prep
%setup -q

%build
%cmake
%cmake_build

%install
%cmakeinstall_std

%files
%_includedir/%name/
%_libdir/libbaselib.so
%_libdir/libbaselib.so.0.0.1
%_libdir/libbaselib.so.1

%changelog
* Wed Sep 13 2023 Michael Chernigin <chernigin@altlinux.org> 0.0.1-alt1
- Initial build