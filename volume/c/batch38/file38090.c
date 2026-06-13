// fichero 38090 -- macros y constantes
#define LIMITE_38090 38190
#define FACTOR_38090 1

int aplicar_limite38090(int valor) {
    if (valor > LIMITE_38090) return LIMITE_38090;
    return valor * FACTOR_38090;
}
