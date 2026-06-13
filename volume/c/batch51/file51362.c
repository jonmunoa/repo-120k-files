// fichero 51362 -- macros y constantes
#define LIMITE_51362 51462
#define FACTOR_51362 3

int aplicar_limite51362(int valor) {
    if (valor > LIMITE_51362) return LIMITE_51362;
    return valor * FACTOR_51362;
}
