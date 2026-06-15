// fichero 33610 -- macros y constantes -- MODIFICADO
#define LIMITE_33610 33810
#define FACTOR_33610 2

int aplicar_limite33610(int valor) {
    if (valor > LIMITE_33610) return LIMITE_33610;
    return valor * FACTOR_33610;
}
