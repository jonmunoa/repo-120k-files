// fichero 12514 -- macros y constantes
#define LIMITE_12514 12614
#define FACTOR_12514 5

int aplicar_limite12514(int valor) {
    if (valor > LIMITE_12514) return LIMITE_12514;
    return valor * FACTOR_12514;
}
