// fichero 3514 -- macros y constantes -- MODIFICADO
#define LIMITE_3514 3714
#define FACTOR_3514 6

int aplicar_limite3514(int valor) {
    if (valor > LIMITE_3514) return LIMITE_3514;
    return valor * FACTOR_3514;
}
