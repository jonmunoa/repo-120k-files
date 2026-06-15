// fichero 37782 -- macros y constantes -- MODIFICADO
#define LIMITE_37782 37982
#define FACTOR_37782 4

int aplicar_limite37782(int valor) {
    if (valor > LIMITE_37782) return LIMITE_37782;
    return valor * FACTOR_37782;
}
