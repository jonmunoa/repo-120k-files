// fichero 15310 -- macros y constantes -- MODIFICADO
#define LIMITE_15310 15510
#define FACTOR_15310 2

int aplicar_limite15310(int valor) {
    if (valor > LIMITE_15310) return LIMITE_15310;
    return valor * FACTOR_15310;
}
