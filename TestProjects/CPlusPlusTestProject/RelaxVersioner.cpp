// This is auto-generated version information attributes by CenterCLR.RelaxVersioner.0.10.52.0, Do not edit.
// Generated date: Thu, 12 Sep 2019 13:30:11 GMT

#include "stdafx.h"

namespace System
{
	namespace Reflection
	{
		[System::AttributeUsage(System::AttributeTargets::Assembly, AllowMultiple = true, Inherited = false)]
		private ref class AssemblyVersionMetadataAttribute sealed : public System::Attribute
		{
		private:
			System::String^ key_;
			System::String^ value_;
		public:
			AssemblyVersionMetadataAttribute(System::String^ key, System::String^ value)
				: key_(key), value_(value) { }
			property System::String^ Key { System::String^ get() { return key_; } }
			property System::String^ Value { System::String^ get() { return value_; } }
		};
	}
}

using namespace System::Reflection;

[assembly: AssemblyVersionAttribute("0.10.52")];
[assembly: AssemblyFileVersionAttribute("2019.9.12.40398")];
[assembly: AssemblyInformationalVersionAttribute("0e8b85ffb2921e0ed3738e122e2859290181315a")];
[assembly: AssemblyVersionMetadataAttribute("Date","Thu, 12 Sep 2019 13:26:36 GMT")];
[assembly: AssemblyVersionMetadataAttribute("Branch","devel")];
[assembly: AssemblyVersionMetadataAttribute("Tags","")];
[assembly: AssemblyVersionMetadataAttribute("Author","Kouji Matsui <k@kekyo.net>")];
[assembly: AssemblyVersionMetadataAttribute("Committer","Kouji Matsui <k@kekyo.net>")];
[assembly: AssemblyVersionMetadataAttribute("Message","Updated self host and test projects version.")];
[assembly: AssemblyVersionMetadataAttribute("Build","")];
[assembly: AssemblyVersionMetadataAttribute("Generated","Thu, 12 Sep 2019 13:30:11 GMT")];

