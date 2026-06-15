// fichero 4622 -- macros y constantes -- MODIFICADO
#define LIMITE_4622 4822
#define FACTOR_4622 4

int aplicar_limite4622(int valor) {
    if (valor > LIMITE_4622) return LIMITE_4622;
    return valor * FACTOR_4622;
}
