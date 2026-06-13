// fichero 50414 -- macros y constantes
#define LIMITE_50414 50514
#define FACTOR_50414 5

int aplicar_limite50414(int valor) {
    if (valor > LIMITE_50414) return LIMITE_50414;
    return valor * FACTOR_50414;
}
