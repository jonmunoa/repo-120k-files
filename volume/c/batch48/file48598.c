// fichero 48598 -- macros y constantes -- MODIFICADO
#define LIMITE_48598 48798
#define FACTOR_48598 5

int aplicar_limite48598(int valor) {
    if (valor > LIMITE_48598) return LIMITE_48598;
    return valor * FACTOR_48598;
}
