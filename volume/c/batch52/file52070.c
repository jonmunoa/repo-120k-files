// fichero 52070 -- macros y constantes
#define LIMITE_52070 52170
#define FACTOR_52070 1

int aplicar_limite52070(int valor) {
    if (valor > LIMITE_52070) return LIMITE_52070;
    return valor * FACTOR_52070;
}
