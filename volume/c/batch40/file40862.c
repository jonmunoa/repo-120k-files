// fichero 40862 -- macros y constantes -- MODIFICADO
#define LIMITE_40862 41062
#define FACTOR_40862 4

int aplicar_limite40862(int valor) {
    if (valor > LIMITE_40862) return LIMITE_40862;
    return valor * FACTOR_40862;
}
