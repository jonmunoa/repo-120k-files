// fichero 29450 -- macros y constantes
#define LIMITE_29450 29550
#define FACTOR_29450 1

int aplicar_limite29450(int valor) {
    if (valor > LIMITE_29450) return LIMITE_29450;
    return valor * FACTOR_29450;
}
