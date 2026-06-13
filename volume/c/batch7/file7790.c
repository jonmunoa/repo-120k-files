// fichero 7790 -- macros y constantes
#define LIMITE_7790 7890
#define FACTOR_7790 1

int aplicar_limite7790(int valor) {
    if (valor > LIMITE_7790) return LIMITE_7790;
    return valor * FACTOR_7790;
}
