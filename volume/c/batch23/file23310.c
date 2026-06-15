// fichero 23310 -- macros y constantes -- MODIFICADO
#define LIMITE_23310 23510
#define FACTOR_23310 2

int aplicar_limite23310(int valor) {
    if (valor > LIMITE_23310) return LIMITE_23310;
    return valor * FACTOR_23310;
}
