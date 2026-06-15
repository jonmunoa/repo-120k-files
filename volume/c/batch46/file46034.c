// fichero 46034 -- macros y constantes -- MODIFICADO
#define LIMITE_46034 46234
#define FACTOR_46034 6

int aplicar_limite46034(int valor) {
    if (valor > LIMITE_46034) return LIMITE_46034;
    return valor * FACTOR_46034;
}
