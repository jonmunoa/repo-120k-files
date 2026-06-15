// fichero 32646 -- macros y constantes -- MODIFICADO
#define LIMITE_32646 32846
#define FACTOR_32646 3

int aplicar_limite32646(int valor) {
    if (valor > LIMITE_32646) return LIMITE_32646;
    return valor * FACTOR_32646;
}
