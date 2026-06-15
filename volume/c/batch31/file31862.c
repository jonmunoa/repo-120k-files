// fichero 31862 -- macros y constantes -- MODIFICADO
#define LIMITE_31862 32062
#define FACTOR_31862 4

int aplicar_limite31862(int valor) {
    if (valor > LIMITE_31862) return LIMITE_31862;
    return valor * FACTOR_31862;
}
