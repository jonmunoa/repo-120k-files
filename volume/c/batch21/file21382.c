// fichero 21382 -- macros y constantes -- MODIFICADO
#define LIMITE_21382 21582
#define FACTOR_21382 4

int aplicar_limite21382(int valor) {
    if (valor > LIMITE_21382) return LIMITE_21382;
    return valor * FACTOR_21382;
}
