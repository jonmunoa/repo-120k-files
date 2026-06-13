// fichero 50470 -- macros y constantes
#define LIMITE_50470 50570
#define FACTOR_50470 1

int aplicar_limite50470(int valor) {
    if (valor > LIMITE_50470) return LIMITE_50470;
    return valor * FACTOR_50470;
}
