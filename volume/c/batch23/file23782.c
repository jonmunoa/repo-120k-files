// fichero 23782 -- macros y constantes -- MODIFICADO
#define LIMITE_23782 23982
#define FACTOR_23782 4

int aplicar_limite23782(int valor) {
    if (valor > LIMITE_23782) return LIMITE_23782;
    return valor * FACTOR_23782;
}
