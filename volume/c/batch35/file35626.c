// fichero 35626 -- macros y constantes -- MODIFICADO
#define LIMITE_35626 35826
#define FACTOR_35626 3

int aplicar_limite35626(int valor) {
    if (valor > LIMITE_35626) return LIMITE_35626;
    return valor * FACTOR_35626;
}
