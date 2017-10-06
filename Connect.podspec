Pod::Spec.new do |s|
  s.name         = "ConnectSDK"
  s.version      = "1.4.5"
  s.summary      = "Connect Interactive SDK for iOS."

  s.description      = <<-DESC
This fantastic view changes its color gradually makes your app look fantastic!
                       DESC
  s.homepage     = "http://connectedinteractive.com"
  s.license    = { :type => "Apache License 2.0", :file => 'LICENSE' }
  s.author             = { "Lisardo" => "lisardo.kist@gmail.com" }
  s.platform     = :ios, "8.0"
  s.source       = { :git => "https://github.com/lisardo/cocoapod-test.git", :tag => "#{s.version}" }
  s.ios.vendored_frameworks = 'ConnectSDK.framework'
  s.source_files = 'ConnectSDK.framework/Versions/A/Headers/*.h'
  s.preserve_paths = 'ConnectSDK.framework/*'
  s.requires_arc = true
  s.xcconfig  =  { 'LIBRARY_SEARCH_PATHS' => '"$(PODS_ROOT)/ConnectSDK"',
             'HEADER_SEARCH_PATHS' => '"${PODS_ROOT}/Headers/ConnectSDK"' }


  # s.public_header_files = "Classes/**/*.h"

end
