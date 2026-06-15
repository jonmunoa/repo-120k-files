// fichero 39626 -- macros y constantes -- MODIFICADO
#define LIMITE_39626 39826
#define FACTOR_39626 3

int aplicar_limite39626(int valor) {
    if (valor > LIMITE_39626) return LIMITE_39626;
    return valor * FACTOR_39626;
}
