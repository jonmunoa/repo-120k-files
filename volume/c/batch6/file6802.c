// fichero 6802 -- macros y constantes -- MODIFICADO
#define LIMITE_6802 7002
#define FACTOR_6802 4

int aplicar_limite6802(int valor) {
    if (valor > LIMITE_6802) return LIMITE_6802;
    return valor * FACTOR_6802;
}
