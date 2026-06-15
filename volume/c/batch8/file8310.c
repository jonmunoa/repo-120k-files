// fichero 8310 -- macros y constantes -- MODIFICADO
#define LIMITE_8310 8510
#define FACTOR_8310 2

int aplicar_limite8310(int valor) {
    if (valor > LIMITE_8310) return LIMITE_8310;
    return valor * FACTOR_8310;
}
