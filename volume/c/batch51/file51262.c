// fichero 51262 -- macros y constantes
#define LIMITE_51262 51362
#define FACTOR_51262 3

int aplicar_limite51262(int valor) {
    if (valor > LIMITE_51262) return LIMITE_51262;
    return valor * FACTOR_51262;
}
