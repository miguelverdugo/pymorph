import os
import sys
from setuptools import setup, find_packages


# Check if pymouse could run on the given system
if os.name != 'posix':
    raise ValueError(
        'Detected unsupported operating system: {}.'.format(sys.platform)
    )

long_description = 'This pipeline was written as a part of some projects on galaxy morphology by Vinu Vikraman and Alan Meert. Yogesh Wadadekar, Ajit Kembhavi, G V Vijayagovidan and Mariangela Bernardi were working on those projects. It REQUIRES SExtractor and GALFIT.'

setup(
    name='pymorph',
    author='Vinu Vikraman, Alan Meert',
    author_email='vvinuv@gmail.com',
    description='Galaxy Models using SExtractor and GALFIT',
    long_description=long_description,
    long_description_content_type='text/markdown',
    include_package_data=True,
    license='BSD',
    platforms=['Linux'],
    classifiers=[
        "Environment :: Console",
        "Intended Audience :: Developers",
        "Intended Audience :: Education",
        "Intended Audience :: Science/Research",
        "Intended Audience :: Information Technology",
        "License :: OSI Approved :: BSD License",
        "Natural Language :: English",
        "Operating System :: OS Independent",
        "Topic :: Scientific/Engineering :: Galaxy Analysis",
        'Programming Language :: Python :: 3.6',
    ],

)
