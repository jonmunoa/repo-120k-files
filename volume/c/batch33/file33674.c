// fichero 33674 -- macros y constantes -- MODIFICADO
#define LIMITE_33674 33874
#define FACTOR_33674 6

int aplicar_limite33674(int valor) {
    if (valor > LIMITE_33674) return LIMITE_33674;
    return valor * FACTOR_33674;
}
