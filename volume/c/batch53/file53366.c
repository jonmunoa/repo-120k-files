// fichero 53366 -- macros y constantes
#define LIMITE_53366 53466
#define FACTOR_53366 2

int aplicar_limite53366(int valor) {
    if (valor > LIMITE_53366) return LIMITE_53366;
    return valor * FACTOR_53366;
}
