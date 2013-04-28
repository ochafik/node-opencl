{
  'targets': [
    {
      'link_settings': {
        'libraries': [
          '-framework',
          'OpenGL'
        ]
      },
      'defines': [
        'CL_USE_DEPRECATED_OPENCL_1_0_APIS=1',
        'CL_USE_DEPRECATED_OPENCL_1_1_APIS=1',
        'CL_USE_DEPRECATED_OPENCL_1_2_APIS=1'
      ],
      'include_dirs': [

      ],
      'dependencies': [

      ],
      'target_name': 'OpenGL',
      'sources': [
        'src/OpenGL_module.cc'
      ]
    },
    {
      'link_settings': {
        'libraries': [
          '-framework',
          'OpenCL'
        ]
      },
      'defines': [
        'CL_USE_DEPRECATED_OPENCL_1_0_APIS=1',
        'CL_USE_DEPRECATED_OPENCL_1_1_APIS=1',
        'CL_USE_DEPRECATED_OPENCL_1_2_APIS=1'
      ],
      'include_dirs': [

      ],
      'dependencies': [

      ],
      'target_name': 'OpenCL',
      'sources': [
        'src/OpenCL_module.cc'
      ]
    }
  ]
}