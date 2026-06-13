// fichero 25322 -- macros y constantes
#define LIMITE_25322 25422
#define FACTOR_25322 3

int aplicar_limite25322(int valor) {
    if (valor > LIMITE_25322) return LIMITE_25322;
    return valor * FACTOR_25322;
}
