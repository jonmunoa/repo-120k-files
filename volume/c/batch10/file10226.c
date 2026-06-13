// fichero 10226 -- macros y constantes
#define LIMITE_10226 10326
#define FACTOR_10226 2

int aplicar_limite10226(int valor) {
    if (valor > LIMITE_10226) return LIMITE_10226;
    return valor * FACTOR_10226;
}
