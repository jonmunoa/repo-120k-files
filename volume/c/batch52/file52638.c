// fichero 52638 -- macros y constantes
#define LIMITE_52638 52738
#define FACTOR_52638 4

int aplicar_limite52638(int valor) {
    if (valor > LIMITE_52638) return LIMITE_52638;
    return valor * FACTOR_52638;
}
