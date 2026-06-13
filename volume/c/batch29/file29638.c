// fichero 29638 -- macros y constantes
#define LIMITE_29638 29738
#define FACTOR_29638 4

int aplicar_limite29638(int valor) {
    if (valor > LIMITE_29638) return LIMITE_29638;
    return valor * FACTOR_29638;
}
