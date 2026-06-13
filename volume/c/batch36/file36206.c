// fichero 36206 -- macros y constantes
#define LIMITE_36206 36306
#define FACTOR_36206 2

int aplicar_limite36206(int valor) {
    if (valor > LIMITE_36206) return LIMITE_36206;
    return valor * FACTOR_36206;
}
