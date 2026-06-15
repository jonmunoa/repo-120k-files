// fichero 802 -- macros y constantes -- MODIFICADO
#define LIMITE_802 1002
#define FACTOR_802 4

int aplicar_limite802(int valor) {
    if (valor > LIMITE_802) return LIMITE_802;
    return valor * FACTOR_802;
}
