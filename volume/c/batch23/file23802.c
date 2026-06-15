// fichero 23802 -- macros y constantes -- MODIFICADO
#define LIMITE_23802 24002
#define FACTOR_23802 4

int aplicar_limite23802(int valor) {
    if (valor > LIMITE_23802) return LIMITE_23802;
    return valor * FACTOR_23802;
}
