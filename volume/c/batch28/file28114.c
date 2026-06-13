// fichero 28114 -- macros y constantes
#define LIMITE_28114 28214
#define FACTOR_28114 5

int aplicar_limite28114(int valor) {
    if (valor > LIMITE_28114) return LIMITE_28114;
    return valor * FACTOR_28114;
}
