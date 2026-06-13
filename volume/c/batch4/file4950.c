// fichero 4950 -- macros y constantes
#define LIMITE_4950 5050
#define FACTOR_4950 1

int aplicar_limite4950(int valor) {
    if (valor > LIMITE_4950) return LIMITE_4950;
    return valor * FACTOR_4950;
}
