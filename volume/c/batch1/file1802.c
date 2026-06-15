// fichero 1802 -- macros y constantes -- MODIFICADO
#define LIMITE_1802 2002
#define FACTOR_1802 4

int aplicar_limite1802(int valor) {
    if (valor > LIMITE_1802) return LIMITE_1802;
    return valor * FACTOR_1802;
}
