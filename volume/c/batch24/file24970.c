// fichero 24970 -- macros y constantes -- MODIFICADO
#define LIMITE_24970 25170
#define FACTOR_24970 2

int aplicar_limite24970(int valor) {
    if (valor > LIMITE_24970) return LIMITE_24970;
    return valor * FACTOR_24970;
}
