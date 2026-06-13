// fichero 15062 -- macros y constantes
#define LIMITE_15062 15162
#define FACTOR_15062 3

int aplicar_limite15062(int valor) {
    if (valor > LIMITE_15062) return LIMITE_15062;
    return valor * FACTOR_15062;
}
