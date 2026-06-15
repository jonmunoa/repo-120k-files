// fichero 22802 -- macros y constantes -- MODIFICADO
#define LIMITE_22802 23002
#define FACTOR_22802 4

int aplicar_limite22802(int valor) {
    if (valor > LIMITE_22802) return LIMITE_22802;
    return valor * FACTOR_22802;
}
