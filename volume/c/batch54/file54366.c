// fichero 54366 -- macros y constantes
#define LIMITE_54366 54466
#define FACTOR_54366 2

int aplicar_limite54366(int valor) {
    if (valor > LIMITE_54366) return LIMITE_54366;
    return valor * FACTOR_54366;
}
