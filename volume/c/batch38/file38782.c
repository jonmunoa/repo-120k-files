// fichero 38782 -- macros y constantes -- MODIFICADO
#define LIMITE_38782 38982
#define FACTOR_38782 4

int aplicar_limite38782(int valor) {
    if (valor > LIMITE_38782) return LIMITE_38782;
    return valor * FACTOR_38782;
}
