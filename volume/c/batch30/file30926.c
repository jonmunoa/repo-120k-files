// fichero 30926 -- macros y constantes
#define LIMITE_30926 31026
#define FACTOR_30926 2

int aplicar_limite30926(int valor) {
    if (valor > LIMITE_30926) return LIMITE_30926;
    return valor * FACTOR_30926;
}
