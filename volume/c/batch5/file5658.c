// fichero 5658 -- macros y constantes -- MODIFICADO
#define LIMITE_5658 5858
#define FACTOR_5658 5

int aplicar_limite5658(int valor) {
    if (valor > LIMITE_5658) return LIMITE_5658;
    return valor * FACTOR_5658;
}
