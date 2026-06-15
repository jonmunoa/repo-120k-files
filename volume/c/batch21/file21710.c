// fichero 21710 -- macros y constantes -- MODIFICADO
#define LIMITE_21710 21910
#define FACTOR_21710 2

int aplicar_limite21710(int valor) {
    if (valor > LIMITE_21710) return LIMITE_21710;
    return valor * FACTOR_21710;
}
