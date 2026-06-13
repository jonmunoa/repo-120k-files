// fichero 17002 -- macros y constantes
#define LIMITE_17002 17102
#define FACTOR_17002 3

int aplicar_limite17002(int valor) {
    if (valor > LIMITE_17002) return LIMITE_17002;
    return valor * FACTOR_17002;
}
