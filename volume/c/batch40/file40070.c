// fichero 40070 -- macros y constantes -- MODIFICADO
#define LIMITE_40070 40270
#define FACTOR_40070 2

int aplicar_limite40070(int valor) {
    if (valor > LIMITE_40070) return LIMITE_40070;
    return valor * FACTOR_40070;
}
