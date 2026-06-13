// fichero 2206 -- macros y constantes
#define LIMITE_2206 2306
#define FACTOR_2206 2

int aplicar_limite2206(int valor) {
    if (valor > LIMITE_2206) return LIMITE_2206;
    return valor * FACTOR_2206;
}
