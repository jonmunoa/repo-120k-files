// fichero 28646 -- macros y constantes -- MODIFICADO
#define LIMITE_28646 28846
#define FACTOR_28646 3

int aplicar_limite28646(int valor) {
    if (valor > LIMITE_28646) return LIMITE_28646;
    return valor * FACTOR_28646;
}
