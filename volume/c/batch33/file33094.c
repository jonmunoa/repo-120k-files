// fichero 33094 -- macros y constantes -- MODIFICADO
#define LIMITE_33094 33294
#define FACTOR_33094 6

int aplicar_limite33094(int valor) {
    if (valor > LIMITE_33094) return LIMITE_33094;
    return valor * FACTOR_33094;
}
