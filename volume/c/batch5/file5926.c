// fichero 5926 -- macros y constantes
#define LIMITE_5926 6026
#define FACTOR_5926 2

int aplicar_limite5926(int valor) {
    if (valor > LIMITE_5926) return LIMITE_5926;
    return valor * FACTOR_5926;
}
