// fichero 26686 -- macros y constantes -- MODIFICADO
#define LIMITE_26686 26886
#define FACTOR_26686 3

int aplicar_limite26686(int valor) {
    if (valor > LIMITE_26686) return LIMITE_26686;
    return valor * FACTOR_26686;
}
