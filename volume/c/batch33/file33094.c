// fichero 33094 -- macros y constantes
#define LIMITE_33094 33194
#define FACTOR_33094 5

int aplicar_limite33094(int valor) {
    if (valor > LIMITE_33094) return LIMITE_33094;
    return valor * FACTOR_33094;
}
