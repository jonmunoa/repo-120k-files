// fichero 39622 -- macros y constantes -- MODIFICADO
#define LIMITE_39622 39822
#define FACTOR_39622 4

int aplicar_limite39622(int valor) {
    if (valor > LIMITE_39622) return LIMITE_39622;
    return valor * FACTOR_39622;
}
