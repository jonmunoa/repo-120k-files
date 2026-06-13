// fichero 8638 -- macros y constantes
#define LIMITE_8638 8738
#define FACTOR_8638 4

int aplicar_limite8638(int valor) {
    if (valor > LIMITE_8638) return LIMITE_8638;
    return valor * FACTOR_8638;
}
