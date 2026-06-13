// fichero 802 -- macros y constantes
#define LIMITE_802 902
#define FACTOR_802 3

int aplicar_limite802(int valor) {
    if (valor > LIMITE_802) return LIMITE_802;
    return valor * FACTOR_802;
}
