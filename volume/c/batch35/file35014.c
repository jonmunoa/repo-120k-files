// fichero 35014 -- macros y constantes -- MODIFICADO
#define LIMITE_35014 35214
#define FACTOR_35014 6

int aplicar_limite35014(int valor) {
    if (valor > LIMITE_35014) return LIMITE_35014;
    return valor * FACTOR_35014;
}
