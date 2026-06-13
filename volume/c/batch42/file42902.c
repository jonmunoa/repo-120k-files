// fichero 42902 -- macros y constantes
#define LIMITE_42902 43002
#define FACTOR_42902 3

int aplicar_limite42902(int valor) {
    if (valor > LIMITE_42902) return LIMITE_42902;
    return valor * FACTOR_42902;
}
