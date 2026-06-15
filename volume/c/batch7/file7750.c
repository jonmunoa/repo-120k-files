// fichero 7750 -- macros y constantes -- MODIFICADO
#define LIMITE_7750 7950
#define FACTOR_7750 2

int aplicar_limite7750(int valor) {
    if (valor > LIMITE_7750) return LIMITE_7750;
    return valor * FACTOR_7750;
}
