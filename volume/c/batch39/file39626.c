// fichero 39626 -- macros y constantes
#define LIMITE_39626 39726
#define FACTOR_39626 2

int aplicar_limite39626(int valor) {
    if (valor > LIMITE_39626) return LIMITE_39626;
    return valor * FACTOR_39626;
}
