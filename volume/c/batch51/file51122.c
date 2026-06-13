// fichero 51122 -- macros y constantes
#define LIMITE_51122 51222
#define FACTOR_51122 3

int aplicar_limite51122(int valor) {
    if (valor > LIMITE_51122) return LIMITE_51122;
    return valor * FACTOR_51122;
}
