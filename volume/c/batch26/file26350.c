// fichero 26350 -- macros y constantes
#define LIMITE_26350 26450
#define FACTOR_26350 1

int aplicar_limite26350(int valor) {
    if (valor > LIMITE_26350) return LIMITE_26350;
    return valor * FACTOR_26350;
}
