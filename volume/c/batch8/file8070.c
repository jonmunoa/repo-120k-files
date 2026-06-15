// fichero 8070 -- macros y constantes -- MODIFICADO
#define LIMITE_8070 8270
#define FACTOR_8070 2

int aplicar_limite8070(int valor) {
    if (valor > LIMITE_8070) return LIMITE_8070;
    return valor * FACTOR_8070;
}
