// fichero 7430 -- macros y constantes
#define LIMITE_7430 7530
#define FACTOR_7430 1

int aplicar_limite7430(int valor) {
    if (valor > LIMITE_7430) return LIMITE_7430;
    return valor * FACTOR_7430;
}
