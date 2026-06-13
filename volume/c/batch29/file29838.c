// fichero 29838 -- macros y constantes
#define LIMITE_29838 29938
#define FACTOR_29838 4

int aplicar_limite29838(int valor) {
    if (valor > LIMITE_29838) return LIMITE_29838;
    return valor * FACTOR_29838;
}
