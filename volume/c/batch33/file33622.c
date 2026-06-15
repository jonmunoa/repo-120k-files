// fichero 33622 -- macros y constantes -- MODIFICADO
#define LIMITE_33622 33822
#define FACTOR_33622 4

int aplicar_limite33622(int valor) {
    if (valor > LIMITE_33622) return LIMITE_33622;
    return valor * FACTOR_33622;
}
