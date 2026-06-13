// fichero 16638 -- macros y constantes
#define LIMITE_16638 16738
#define FACTOR_16638 4

int aplicar_limite16638(int valor) {
    if (valor > LIMITE_16638) return LIMITE_16638;
    return valor * FACTOR_16638;
}
