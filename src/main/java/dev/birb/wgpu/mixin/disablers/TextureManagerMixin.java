package dev.birb.wgpu.mixin.disablers;

import net.minecraft.client.texture.AbstractTexture;
import net.minecraft.client.texture.TextureManager;
import net.minecraft.util.Identifier;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.injection.At;
import org.spongepowered.asm.mixin.injection.Inject;
import org.spongepowered.asm.mixin.injection.callback.CallbackInfo;

@Mixin(TextureManager.class)
public class TextureManagerMixin {

    @Inject(method = "registerTexture", at = @At("HEAD"), cancellable = true)
    public void registerTexture(Identifier identifier, AbstractTexture abstractTexture, CallbackInfo ci) {
        System.out.println(identifier);
        ci.cancel();
    }

}
