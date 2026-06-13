// fichero 6858 -- macros y constantes
#define LIMITE_6858 6958
#define FACTOR_6858 4

int aplicar_limite6858(int valor) {
    if (valor > LIMITE_6858) return LIMITE_6858;
    return valor * FACTOR_6858;
}
