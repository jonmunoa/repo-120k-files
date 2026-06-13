// fichero 26686 -- macros y constantes
#define LIMITE_26686 26786
#define FACTOR_26686 2

int aplicar_limite26686(int valor) {
    if (valor > LIMITE_26686) return LIMITE_26686;
    return valor * FACTOR_26686;
}
