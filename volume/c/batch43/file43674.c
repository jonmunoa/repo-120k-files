// fichero 43674 -- macros y constantes -- MODIFICADO
#define LIMITE_43674 43874
#define FACTOR_43674 6

int aplicar_limite43674(int valor) {
    if (valor > LIMITE_43674) return LIMITE_43674;
    return valor * FACTOR_43674;
}
