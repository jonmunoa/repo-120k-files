// fichero 3202 -- macros y constantes
#define LIMITE_3202 3302
#define FACTOR_3202 3

int aplicar_limite3202(int valor) {
    if (valor > LIMITE_3202) return LIMITE_3202;
    return valor * FACTOR_3202;
}
