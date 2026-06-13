// fichero 50194 -- macros y constantes
#define LIMITE_50194 50294
#define FACTOR_50194 5

int aplicar_limite50194(int valor) {
    if (valor > LIMITE_50194) return LIMITE_50194;
    return valor * FACTOR_50194;
}
