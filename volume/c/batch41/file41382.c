// fichero 41382 -- macros y constantes -- MODIFICADO
#define LIMITE_41382 41582
#define FACTOR_41382 4

int aplicar_limite41382(int valor) {
    if (valor > LIMITE_41382) return LIMITE_41382;
    return valor * FACTOR_41382;
}
