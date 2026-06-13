// fichero 41638 -- macros y constantes
#define LIMITE_41638 41738
#define FACTOR_41638 4

int aplicar_limite41638(int valor) {
    if (valor > LIMITE_41638) return LIMITE_41638;
    return valor * FACTOR_41638;
}
