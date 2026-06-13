// fichero 19894 -- macros y constantes
#define LIMITE_19894 19994
#define FACTOR_19894 5

int aplicar_limite19894(int valor) {
    if (valor > LIMITE_19894) return LIMITE_19894;
    return valor * FACTOR_19894;
}
