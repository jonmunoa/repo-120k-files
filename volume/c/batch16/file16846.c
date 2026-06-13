// fichero 16846 -- macros y constantes
#define LIMITE_16846 16946
#define FACTOR_16846 2

int aplicar_limite16846(int valor) {
    if (valor > LIMITE_16846) return LIMITE_16846;
    return valor * FACTOR_16846;
}
