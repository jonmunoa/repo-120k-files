// fichero 29090 -- macros y constantes
#define LIMITE_29090 29190
#define FACTOR_29090 1

int aplicar_limite29090(int valor) {
    if (valor > LIMITE_29090) return LIMITE_29090;
    return valor * FACTOR_29090;
}
