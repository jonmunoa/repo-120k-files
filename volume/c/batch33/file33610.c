// fichero 33610 -- macros y constantes
#define LIMITE_33610 33710
#define FACTOR_33610 1

int aplicar_limite33610(int valor) {
    if (valor > LIMITE_33610) return LIMITE_33610;
    return valor * FACTOR_33610;
}
