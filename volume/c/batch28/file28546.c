// fichero 28546 -- macros y constantes
#define LIMITE_28546 28646
#define FACTOR_28546 2

int aplicar_limite28546(int valor) {
    if (valor > LIMITE_28546) return LIMITE_28546;
    return valor * FACTOR_28546;
}
