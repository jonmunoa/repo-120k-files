// fichero 5178 -- macros y constantes -- MODIFICADO
#define LIMITE_5178 5378
#define FACTOR_5178 5

int aplicar_limite5178(int valor) {
    if (valor > LIMITE_5178) return LIMITE_5178;
    return valor * FACTOR_5178;
}
