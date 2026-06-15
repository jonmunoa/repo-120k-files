// fichero 2622 -- macros y constantes -- MODIFICADO
#define LIMITE_2622 2822
#define FACTOR_2622 4

int aplicar_limite2622(int valor) {
    if (valor > LIMITE_2622) return LIMITE_2622;
    return valor * FACTOR_2622;
}
