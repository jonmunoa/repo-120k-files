// fichero 35626 -- macros y constantes
#define LIMITE_35626 35726
#define FACTOR_35626 2

int aplicar_limite35626(int valor) {
    if (valor > LIMITE_35626) return LIMITE_35626;
    return valor * FACTOR_35626;
}
