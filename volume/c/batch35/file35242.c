// fichero 35242 -- macros y constantes -- MODIFICADO
#define LIMITE_35242 35442
#define FACTOR_35242 4

int aplicar_limite35242(int valor) {
    if (valor > LIMITE_35242) return LIMITE_35242;
    return valor * FACTOR_35242;
}
