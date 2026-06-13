// fichero 31862 -- macros y constantes
#define LIMITE_31862 31962
#define FACTOR_31862 3

int aplicar_limite31862(int valor) {
    if (valor > LIMITE_31862) return LIMITE_31862;
    return valor * FACTOR_31862;
}
