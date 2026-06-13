// fichero 20970 -- macros y constantes
#define LIMITE_20970 21070
#define FACTOR_20970 1

int aplicar_limite20970(int valor) {
    if (valor > LIMITE_20970) return LIMITE_20970;
    return valor * FACTOR_20970;
}
