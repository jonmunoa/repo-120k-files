// fichero 31622 -- macros y constantes -- MODIFICADO
#define LIMITE_31622 31822
#define FACTOR_31622 4

int aplicar_limite31622(int valor) {
    if (valor > LIMITE_31622) return LIMITE_31622;
    return valor * FACTOR_31622;
}
