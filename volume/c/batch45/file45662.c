// fichero 45662 -- macros y constantes -- MODIFICADO
#define LIMITE_45662 45862
#define FACTOR_45662 4

int aplicar_limite45662(int valor) {
    if (valor > LIMITE_45662) return LIMITE_45662;
    return valor * FACTOR_45662;
}
