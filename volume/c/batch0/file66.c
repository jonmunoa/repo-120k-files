// fichero 66 -- macros y constantes
#define LIMITE_66 166
#define FACTOR_66 2

int aplicar_limite66(int valor) {
    if (valor > LIMITE_66) return LIMITE_66;
    return valor * FACTOR_66;
}
