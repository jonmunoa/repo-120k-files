// fichero 47414 -- macros y constantes
#define LIMITE_47414 47514
#define FACTOR_47414 5

int aplicar_limite47414(int valor) {
    if (valor > LIMITE_47414) return LIMITE_47414;
    return valor * FACTOR_47414;
}
