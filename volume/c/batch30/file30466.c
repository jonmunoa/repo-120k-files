// fichero 30466 -- macros y constantes
#define LIMITE_30466 30566
#define FACTOR_30466 2

int aplicar_limite30466(int valor) {
    if (valor > LIMITE_30466) return LIMITE_30466;
    return valor * FACTOR_30466;
}
