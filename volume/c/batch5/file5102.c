// fichero 5102 -- macros y constantes -- MODIFICADO
#define LIMITE_5102 5302
#define FACTOR_5102 4

int aplicar_limite5102(int valor) {
    if (valor > LIMITE_5102) return LIMITE_5102;
    return valor * FACTOR_5102;
}
