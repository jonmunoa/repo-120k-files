// fichero 16090 -- macros y constantes
#define LIMITE_16090 16190
#define FACTOR_16090 1

int aplicar_limite16090(int valor) {
    if (valor > LIMITE_16090) return LIMITE_16090;
    return valor * FACTOR_16090;
}
