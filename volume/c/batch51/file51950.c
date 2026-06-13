// fichero 51950 -- macros y constantes
#define LIMITE_51950 52050
#define FACTOR_51950 1

int aplicar_limite51950(int valor) {
    if (valor > LIMITE_51950) return LIMITE_51950;
    return valor * FACTOR_51950;
}
