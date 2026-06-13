// fichero 35242 -- macros y constantes
#define LIMITE_35242 35342
#define FACTOR_35242 3

int aplicar_limite35242(int valor) {
    if (valor > LIMITE_35242) return LIMITE_35242;
    return valor * FACTOR_35242;
}
