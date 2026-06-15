// fichero 33342 -- macros y constantes -- MODIFICADO
#define LIMITE_33342 33542
#define FACTOR_33342 4

int aplicar_limite33342(int valor) {
    if (valor > LIMITE_33342) return LIMITE_33342;
    return valor * FACTOR_33342;
}
