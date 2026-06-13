// fichero 13638 -- macros y constantes
#define LIMITE_13638 13738
#define FACTOR_13638 4

int aplicar_limite13638(int valor) {
    if (valor > LIMITE_13638) return LIMITE_13638;
    return valor * FACTOR_13638;
}
