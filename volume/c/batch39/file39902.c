// fichero 39902 -- macros y constantes
#define LIMITE_39902 40002
#define FACTOR_39902 3

int aplicar_limite39902(int valor) {
    if (valor > LIMITE_39902) return LIMITE_39902;
    return valor * FACTOR_39902;
}
