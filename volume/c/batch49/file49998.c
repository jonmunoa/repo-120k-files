// fichero 49998 -- macros y constantes
#define LIMITE_49998 50098
#define FACTOR_49998 4

int aplicar_limite49998(int valor) {
    if (valor > LIMITE_49998) return LIMITE_49998;
    return valor * FACTOR_49998;
}
