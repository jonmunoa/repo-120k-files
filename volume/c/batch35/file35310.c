// fichero 35310 -- macros y constantes -- MODIFICADO
#define LIMITE_35310 35510
#define FACTOR_35310 2

int aplicar_limite35310(int valor) {
    if (valor > LIMITE_35310) return LIMITE_35310;
    return valor * FACTOR_35310;
}
