// fichero 12646 -- macros y constantes -- MODIFICADO
#define LIMITE_12646 12846
#define FACTOR_12646 3

int aplicar_limite12646(int valor) {
    if (valor > LIMITE_12646) return LIMITE_12646;
    return valor * FACTOR_12646;
}
