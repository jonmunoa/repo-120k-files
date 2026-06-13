// fichero 3950 -- macros y constantes
#define LIMITE_3950 4050
#define FACTOR_3950 1

int aplicar_limite3950(int valor) {
    if (valor > LIMITE_3950) return LIMITE_3950;
    return valor * FACTOR_3950;
}
