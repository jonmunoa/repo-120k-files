// fichero 22814 -- macros y constantes
#define LIMITE_22814 22914
#define FACTOR_22814 5

int aplicar_limite22814(int valor) {
    if (valor > LIMITE_22814) return LIMITE_22814;
    return valor * FACTOR_22814;
}
