// fichero 14646 -- macros y constantes -- MODIFICADO
#define LIMITE_14646 14846
#define FACTOR_14646 3

int aplicar_limite14646(int valor) {
    if (valor > LIMITE_14646) return LIMITE_14646;
    return valor * FACTOR_14646;
}
