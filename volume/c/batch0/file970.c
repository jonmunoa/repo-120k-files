// fichero 970 -- macros y constantes -- MODIFICADO
#define LIMITE_970 1170
#define FACTOR_970 2

int aplicar_limite970(int valor) {
    if (valor > LIMITE_970) return LIMITE_970;
    return valor * FACTOR_970;
}
