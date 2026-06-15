// fichero 13930 -- macros y constantes -- MODIFICADO
#define LIMITE_13930 14130
#define FACTOR_13930 2

int aplicar_limite13930(int valor) {
    if (valor > LIMITE_13930) return LIMITE_13930;
    return valor * FACTOR_13930;
}
