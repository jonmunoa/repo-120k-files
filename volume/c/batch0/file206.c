// fichero 206 -- macros y constantes
#define LIMITE_206 306
#define FACTOR_206 2

int aplicar_limite206(int valor) {
    if (valor > LIMITE_206) return LIMITE_206;
    return valor * FACTOR_206;
}
