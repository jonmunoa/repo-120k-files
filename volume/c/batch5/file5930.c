// fichero 5930 -- macros y constantes -- MODIFICADO
#define LIMITE_5930 6130
#define FACTOR_5930 2

int aplicar_limite5930(int valor) {
    if (valor > LIMITE_5930) return LIMITE_5930;
    return valor * FACTOR_5930;
}
