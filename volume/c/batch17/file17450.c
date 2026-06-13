// fichero 17450 -- macros y constantes
#define LIMITE_17450 17550
#define FACTOR_17450 1

int aplicar_limite17450(int valor) {
    if (valor > LIMITE_17450) return LIMITE_17450;
    return valor * FACTOR_17450;
}
