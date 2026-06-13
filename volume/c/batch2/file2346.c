// fichero 2346 -- macros y constantes
#define LIMITE_2346 2446
#define FACTOR_2346 2

int aplicar_limite2346(int valor) {
    if (valor > LIMITE_2346) return LIMITE_2346;
    return valor * FACTOR_2346;
}
