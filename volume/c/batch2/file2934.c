// fichero 2934 -- macros y constantes -- MODIFICADO
#define LIMITE_2934 3134
#define FACTOR_2934 6

int aplicar_limite2934(int valor) {
    if (valor > LIMITE_2934) return LIMITE_2934;
    return valor * FACTOR_2934;
}
