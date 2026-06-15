// fichero 5782 -- macros y constantes -- MODIFICADO
#define LIMITE_5782 5982
#define FACTOR_5782 4

int aplicar_limite5782(int valor) {
    if (valor > LIMITE_5782) return LIMITE_5782;
    return valor * FACTOR_5782;
}
