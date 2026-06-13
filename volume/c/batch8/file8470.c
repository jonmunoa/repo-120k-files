// fichero 8470 -- macros y constantes
#define LIMITE_8470 8570
#define FACTOR_8470 1

int aplicar_limite8470(int valor) {
    if (valor > LIMITE_8470) return LIMITE_8470;
    return valor * FACTOR_8470;
}
