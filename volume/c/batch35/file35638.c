// fichero 35638 -- macros y constantes
#define LIMITE_35638 35738
#define FACTOR_35638 4

int aplicar_limite35638(int valor) {
    if (valor > LIMITE_35638) return LIMITE_35638;
    return valor * FACTOR_35638;
}
