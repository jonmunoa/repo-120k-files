// fichero 12310 -- macros y constantes -- MODIFICADO
#define LIMITE_12310 12510
#define FACTOR_12310 2

int aplicar_limite12310(int valor) {
    if (valor > LIMITE_12310) return LIMITE_12310;
    return valor * FACTOR_12310;
}
