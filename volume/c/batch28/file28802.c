// fichero 28802 -- macros y constantes -- MODIFICADO
#define LIMITE_28802 29002
#define FACTOR_28802 4

int aplicar_limite28802(int valor) {
    if (valor > LIMITE_28802) return LIMITE_28802;
    return valor * FACTOR_28802;
}
