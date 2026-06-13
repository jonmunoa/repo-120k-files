// fichero 38638 -- macros y constantes
#define LIMITE_38638 38738
#define FACTOR_38638 4

int aplicar_limite38638(int valor) {
    if (valor > LIMITE_38638) return LIMITE_38638;
    return valor * FACTOR_38638;
}
