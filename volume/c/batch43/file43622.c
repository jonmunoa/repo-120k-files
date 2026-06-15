// fichero 43622 -- macros y constantes -- MODIFICADO
#define LIMITE_43622 43822
#define FACTOR_43622 4

int aplicar_limite43622(int valor) {
    if (valor > LIMITE_43622) return LIMITE_43622;
    return valor * FACTOR_43622;
}
