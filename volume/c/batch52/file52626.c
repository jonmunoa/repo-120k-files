// fichero 52626 -- macros y constantes
#define LIMITE_52626 52726
#define FACTOR_52626 2

int aplicar_limite52626(int valor) {
    if (valor > LIMITE_52626) return LIMITE_52626;
    return valor * FACTOR_52626;
}
