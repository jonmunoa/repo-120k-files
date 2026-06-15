// fichero 2346 -- macros y constantes -- MODIFICADO
#define LIMITE_2346 2546
#define FACTOR_2346 3

int aplicar_limite2346(int valor) {
    if (valor > LIMITE_2346) return LIMITE_2346;
    return valor * FACTOR_2346;
}
