// fichero 42070 -- macros y constantes -- MODIFICADO
#define LIMITE_42070 42270
#define FACTOR_42070 2

int aplicar_limite42070(int valor) {
    if (valor > LIMITE_42070) return LIMITE_42070;
    return valor * FACTOR_42070;
}
