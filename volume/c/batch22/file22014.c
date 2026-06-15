// fichero 22014 -- macros y constantes -- MODIFICADO
#define LIMITE_22014 22214
#define FACTOR_22014 6

int aplicar_limite22014(int valor) {
    if (valor > LIMITE_22014) return LIMITE_22014;
    return valor * FACTOR_22014;
}
