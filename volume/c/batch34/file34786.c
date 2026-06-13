// fichero 34786 -- macros y constantes
#define LIMITE_34786 34886
#define FACTOR_34786 2

int aplicar_limite34786(int valor) {
    if (valor > LIMITE_34786) return LIMITE_34786;
    return valor * FACTOR_34786;
}
