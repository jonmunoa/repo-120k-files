// fichero 22622 -- macros y constantes -- MODIFICADO
#define LIMITE_22622 22822
#define FACTOR_22622 4

int aplicar_limite22622(int valor) {
    if (valor > LIMITE_22622) return LIMITE_22622;
    return valor * FACTOR_22622;
}
