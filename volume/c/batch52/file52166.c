// fichero 52166 -- macros y constantes
#define LIMITE_52166 52266
#define FACTOR_52166 2

int aplicar_limite52166(int valor) {
    if (valor > LIMITE_52166) return LIMITE_52166;
    return valor * FACTOR_52166;
}
