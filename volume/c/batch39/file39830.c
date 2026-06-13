// fichero 39830 -- macros y constantes
#define LIMITE_39830 39930
#define FACTOR_39830 1

int aplicar_limite39830(int valor) {
    if (valor > LIMITE_39830) return LIMITE_39830;
    return valor * FACTOR_39830;
}
