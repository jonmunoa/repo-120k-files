// fichero 29050 -- macros y constantes
#define LIMITE_29050 29150
#define FACTOR_29050 1

int aplicar_limite29050(int valor) {
    if (valor > LIMITE_29050) return LIMITE_29050;
    return valor * FACTOR_29050;
}
