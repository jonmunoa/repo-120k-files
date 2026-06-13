// fichero 24638 -- macros y constantes
#define LIMITE_24638 24738
#define FACTOR_24638 4

int aplicar_limite24638(int valor) {
    if (valor > LIMITE_24638) return LIMITE_24638;
    return valor * FACTOR_24638;
}
