// fichero 51050 -- macros y constantes
#define LIMITE_51050 51150
#define FACTOR_51050 1

int aplicar_limite51050(int valor) {
    if (valor > LIMITE_51050) return LIMITE_51050;
    return valor * FACTOR_51050;
}
