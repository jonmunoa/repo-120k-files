// fichero 14802 -- macros y constantes -- MODIFICADO
#define LIMITE_14802 15002
#define FACTOR_14802 4

int aplicar_limite14802(int valor) {
    if (valor > LIMITE_14802) return LIMITE_14802;
    return valor * FACTOR_14802;
}
