/*
 * Copyright 2011-2017 Branimir Karadzic. All rights reserved.
 * License: https://github.com/bkaradzic/bgfx#license-bsd-2-clause
 */

#include "bgfx_p.h"

namespace bgfx { namespace noop
{
	struct RendererContextNOOP : public RendererContextI
	{
		RendererContextNOOP()
		{
			// Pretend all features are available.
			g_caps.supported = 0
				| BGFX_CAPS_ALPHA_TO_COVERAGE
				| BGFX_CAPS_BLEND_INDEPENDENT
				| BGFX_CAPS_COMPUTE
				| BGFX_CAPS_CONSERVATIVE_RASTER
				| BGFX_CAPS_DRAW_INDIRECT
				| BGFX_CAPS_FRAGMENT_DEPTH
				| BGFX_CAPS_FRAGMENT_ORDERING
				| BGFX_CAPS_GRAPHICS_DEBUGGER
				| BGFX_CAPS_HIDPI
				| BGFX_CAPS_HMD
				| BGFX_CAPS_INDEX32
				| BGFX_CAPS_INSTANCING
				| BGFX_CAPS_OCCLUSION_QUERY
				| BGFX_CAPS_RENDERER_MULTITHREADED
				| BGFX_CAPS_SWAP_CHAIN
				| BGFX_CAPS_TEXTURE_2D_ARRAY
				| BGFX_CAPS_TEXTURE_3D
				| BGFX_CAPS_TEXTURE_BLIT
				| BGFX_CAPS_TEXTURE_COMPARE_ALL
				| BGFX_CAPS_TEXTURE_COMPARE_LEQUAL
				| BGFX_CAPS_TEXTURE_CUBE_ARRAY
				| BGFX_CAPS_TEXTURE_READ_BACK
				| BGFX_CAPS_VERTEX_ATTRIB_HALF
				| BGFX_CAPS_VERTEX_ATTRIB_UINT10
				;
		}

		~RendererContextNOOP()
		{
		}

		RendererType::Enum getRendererType() const override
		{
			return RendererType::Noop;
		}

		const char* getRendererName() const override
		{
			return BGFX_RENDERER_NOOP_NAME;
		}

		bool isDeviceRemoved() override
		{
			return false;
		}

		void flip(HMD& /*_hmd*/) override
		{
		}

		void createIndexBuffer(IndexBufferHandle /*_handle*/, Memory* /*_mem*/, uint16_t /*_flags*/) override
		{
		}

		void destroyIndexBuffer(IndexBufferHandle /*_handle*/) override
		{
		}

		void createVertexDecl(VertexDeclHandle /*_handle*/, const VertexDecl& /*_decl*/) override
		{
		}

		void destroyVertexDecl(VertexDeclHandle /*_handle*/) override
		{
		}

		void createVertexBuffer(VertexBufferHandle /*_handle*/, Memory* /*_mem*/, VertexDeclHandle /*_declHandle*/, uint16_t /*_flags*/) override
		{
		}

		void destroyVertexBuffer(VertexBufferHandle /*_handle*/) override
		{
		}

		void createDynamicIndexBuffer(IndexBufferHandle /*_handle*/, uint32_t /*_size*/, uint16_t /*_flags*/) override
		{
		}

		void updateDynamicIndexBuffer(IndexBufferHandle /*_handle*/, uint32_t /*_offset*/, uint32_t /*_size*/, Memory* /*_mem*/) override
		{
		}

		void destroyDynamicIndexBuffer(IndexBufferHandle /*_handle*/) override
		{
		}

		void createDynamicVertexBuffer(VertexBufferHandle /*_handle*/, uint32_t /*_size*/, uint16_t /*_flags*/) override
		{
		}

		void updateDynamicVertexBuffer(VertexBufferHandle /*_handle*/, uint32_t /*_offset*/, uint32_t /*_size*/, Memory* /*_mem*/) override
		{
		}

		void destroyDynamicVertexBuffer(VertexBufferHandle /*_handle*/) override
		{
		}

		void createShader(ShaderHandle /*_handle*/, Memory* /*_mem*/) override
		{
		}

		void destroyShader(ShaderHandle /*_handle*/) override
		{
		}

		void createProgram(ProgramHandle /*_handle*/, ShaderHandle /*_vsh*/, ShaderHandle /*_fsh*/) override
		{
		}

		void destroyProgram(ProgramHandle /*_handle*/) override
		{
		}

		void* createTexture(TextureHandle /*_handle*/, Memory* /*_mem*/, uint32_t /*_flags*/, uint8_t /*_skip*/, uint32_t /* _nativeHandle */, bool /* _genMipmaps */) override
		{
			return NULL;
		}

		void updateTextureBegin(TextureHandle /*_handle*/, uint8_t /*_side*/, uint8_t /*_mip*/) override
		{
		}

		void updateTexture(TextureHandle /*_handle*/, uint8_t /*_side*/, uint8_t /*_mip*/, const Rect& /*_rect*/, uint16_t /*_z*/, uint16_t /*_depth*/, uint16_t /*_pitch*/, const Memory* /*_mem*/) override
		{
		}

		void updateTextureEnd() override
		{
		}

		void readTexture(TextureHandle /*_handle*/, void* /*_data*/, uint8_t /*_mip*/) override
		{
		}

		void resizeTexture(TextureHandle /*_handle*/, uint16_t /*_width*/, uint16_t /*_height*/, uint8_t /*_numMips*/) override
		{
		}

		void overrideInternal(TextureHandle /*_handle*/, uintptr_t /*_ptr*/) override
		{
		}

        void setTextureFence(TextureHandle /*_handle*/, void* /*_fence*/) override
        {
        }

		uintptr_t getInternal(TextureHandle /*_handle*/) override
		{
			return 0;
		}

		void destroyTexture(TextureHandle /*_handle*/) override
		{
		}

		void createFrameBuffer(FrameBufferHandle /*_handle*/, uint8_t /*_num*/, const Attachment* /*_attachment*/) override
		{
		}

        void setFrameBufferPresentationTime(FrameBufferHandle /*handle*/, int64_t /*timestamp*/) override
        {
        }

		void createFrameBuffer(FrameBufferHandle /*_handle*/, void* /*_nwh*/, uint32_t /*_width*/, uint32_t /*_height*/, TextureFormat::Enum /*_depthFormat*/) override
		{
		}

		void destroyFrameBuffer(FrameBufferHandle /*_handle*/) override
		{
		}

		void createUniform(UniformHandle /*_handle*/, UniformType::Enum /*_type*/, uint16_t /*_num*/, const char* /*_name*/) override
		{
		}

		void destroyUniform(UniformHandle /*_handle*/) override
		{
		}

		void requestScreenShot(FrameBufferHandle /*_handle*/, const char* /*_filePath*/) override
		{
		}

		void updateViewName(ViewId /*_id*/, const char* /*_name*/) override
		{
		}

		void updateUniform(uint16_t /*_loc*/, const void* /*_data*/, uint32_t /*_size*/) override
		{
		}

		void setMarker(const char* /*_marker*/, uint32_t /*_size*/) override
		{
		}

		void invalidateOcclusionQuery(OcclusionQueryHandle /*_handle*/) override
		{
		}

		virtual void setName(Handle /*_handle*/, const char* /*_name*/) override
		{
		}

		void submit(Frame* /*_render*/, ClearQuad& /*_clearQuad*/, TextVideoMemBlitter& /*_textVideoMemBlitter*/) override
		{
		}

		void blitSetup(TextVideoMemBlitter& /*_blitter*/) override
		{
		}

		void blitRender(TextVideoMemBlitter& /*_blitter*/, uint32_t /*_numIndices*/) override
		{
		}
	};

	static RendererContextNOOP* s_renderNOOP;

	RendererContextI* rendererCreate(const Init& _init)
	{
		BX_UNUSED(_init);
		s_renderNOOP = BX_NEW(g_allocator, RendererContextNOOP);
		return s_renderNOOP;
	}

	void rendererDestroy()
	{
		BX_DELETE(g_allocator, s_renderNOOP);
		s_renderNOOP = NULL;
	}
} /* namespace noop */ } // namespace bgfx
