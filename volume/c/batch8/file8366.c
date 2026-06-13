// fichero 8366 -- macros y constantes
#define LIMITE_8366 8466
#define FACTOR_8366 2

int aplicar_limite8366(int valor) {
    if (valor > LIMITE_8366) return LIMITE_8366;
    return valor * FACTOR_8366;
}
