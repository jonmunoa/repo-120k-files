// fichero 28346 -- macros y constantes -- MODIFICADO
#define LIMITE_28346 28546
#define FACTOR_28346 3

int aplicar_limite28346(int valor) {
    if (valor > LIMITE_28346) return LIMITE_28346;
    return valor * FACTOR_28346;
}
