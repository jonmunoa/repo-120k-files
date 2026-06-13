// fichero 49014 -- macros y constantes
#define LIMITE_49014 49114
#define FACTOR_49014 5

int aplicar_limite49014(int valor) {
    if (valor > LIMITE_49014) return LIMITE_49014;
    return valor * FACTOR_49014;
}
