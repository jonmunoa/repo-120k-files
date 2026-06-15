// fichero 32366 -- macros y constantes -- MODIFICADO
#define LIMITE_32366 32566
#define FACTOR_32366 3

int aplicar_limite32366(int valor) {
    if (valor > LIMITE_32366) return LIMITE_32366;
    return valor * FACTOR_32366;
}
