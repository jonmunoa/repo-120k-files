// fichero 5906 -- macros y constantes
#define LIMITE_5906 6006
#define FACTOR_5906 2

int aplicar_limite5906(int valor) {
    if (valor > LIMITE_5906) return LIMITE_5906;
    return valor * FACTOR_5906;
}
