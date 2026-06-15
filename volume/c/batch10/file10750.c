// fichero 10750 -- macros y constantes -- MODIFICADO
#define LIMITE_10750 10950
#define FACTOR_10750 2

int aplicar_limite10750(int valor) {
    if (valor > LIMITE_10750) return LIMITE_10750;
    return valor * FACTOR_10750;
}
