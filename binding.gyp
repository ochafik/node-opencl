{
  'targets': [
    {
      'target_name': 'OpenGL',
      'sources': [
        'src/OpenGL_module.cc'
      ],
      'include_dirs': [

      ],
      'dependencies': [

      ],
      'defines': [
        'CL_USE_DEPRECATED_OPENCL_1_0_APIS=1',
        'CL_USE_DEPRECATED_OPENCL_1_1_APIS=1',
        'CL_USE_DEPRECATED_OPENCL_1_2_APIS=1'
      ],
      'link_settings': {
        'libraries': [
          '-framework',
          'OpenGL'
        ]
      }
    },
    {
      'target_name': 'OpenCL',
      'sources': [
        'src/OpenCL_module.cc'
      ],
      'include_dirs': [

      ],
      'dependencies': [

      ],
      'defines': [
        'CL_USE_DEPRECATED_OPENCL_1_0_APIS=1',
        'CL_USE_DEPRECATED_OPENCL_1_1_APIS=1',
        'CL_USE_DEPRECATED_OPENCL_1_2_APIS=1'
      ],
      'link_settings': {
        'libraries': [
          '-framework',
          'OpenCL'
        ]
      }
    }
  ]
}