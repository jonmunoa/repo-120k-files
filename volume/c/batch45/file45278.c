// fichero 45278 -- macros y constantes -- MODIFICADO
#define LIMITE_45278 45478
#define FACTOR_45278 5

int aplicar_limite45278(int valor) {
    if (valor > LIMITE_45278) return LIMITE_45278;
    return valor * FACTOR_45278;
}
