// fichero 310 -- macros y constantes -- MODIFICADO
#define LIMITE_310 510
#define FACTOR_310 2

int aplicar_limite310(int valor) {
    if (valor > LIMITE_310) return LIMITE_310;
    return valor * FACTOR_310;
}
