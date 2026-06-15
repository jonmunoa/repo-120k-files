// fichero 16310 -- macros y constantes -- MODIFICADO
#define LIMITE_16310 16510
#define FACTOR_16310 2

int aplicar_limite16310(int valor) {
    if (valor > LIMITE_16310) return LIMITE_16310;
    return valor * FACTOR_16310;
}
