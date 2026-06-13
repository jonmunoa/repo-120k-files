// fichero 45662 -- macros y constantes
#define LIMITE_45662 45762
#define FACTOR_45662 3

int aplicar_limite45662(int valor) {
    if (valor > LIMITE_45662) return LIMITE_45662;
    return valor * FACTOR_45662;
}
