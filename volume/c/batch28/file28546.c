// fichero 28546 -- macros y constantes -- MODIFICADO
#define LIMITE_28546 28746
#define FACTOR_28546 3

int aplicar_limite28546(int valor) {
    if (valor > LIMITE_28546) return LIMITE_28546;
    return valor * FACTOR_28546;
}
