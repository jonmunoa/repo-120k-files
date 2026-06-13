// fichero 6430 -- macros y constantes
#define LIMITE_6430 6530
#define FACTOR_6430 1

int aplicar_limite6430(int valor) {
    if (valor > LIMITE_6430) return LIMITE_6430;
    return valor * FACTOR_6430;
}
