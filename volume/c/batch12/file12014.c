// fichero 12014 -- macros y constantes -- MODIFICADO
#define LIMITE_12014 12214
#define FACTOR_12014 6

int aplicar_limite12014(int valor) {
    if (valor > LIMITE_12014) return LIMITE_12014;
    return valor * FACTOR_12014;
}
