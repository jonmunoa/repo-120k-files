// fichero 13994 -- macros y constantes
#define LIMITE_13994 14094
#define FACTOR_13994 5

int aplicar_limite13994(int valor) {
    if (valor > LIMITE_13994) return LIMITE_13994;
    return valor * FACTOR_13994;
}
