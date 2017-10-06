Pod::Spec.new do |s|
  s.name         = "ConnectSDK"
  s.version      = "1.4.1"
  s.summary      = "Connect Interactive SDK for iOS."

  s.description      = <<-DESC
This fantastic view changes its color gradually makes your app look fantastic!
                       DESC
  s.homepage     = "http://connectedinteractive.com"
  s.license    = { :type => "Apache License 2.0", :file => 'LICENSE' }
  s.author             = { "Lisardo" => "lisardo.kist@gmail.com" }
  s.platform     = :ios, "8.0"
  s.source       = { :git => "https://github.com/lisardo/cocoapod-test.git", :tag => "#{s.version}" }
  s.source_files  = "*"
  s.exclude_files = 'LICENSE', 'README.md', 'ConnectSDK.podspec'

  # s.public_header_files = "Classes/**/*.h"

end
