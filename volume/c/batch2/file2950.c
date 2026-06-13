// fichero 2950 -- macros y constantes
#define LIMITE_2950 3050
#define FACTOR_2950 1

int aplicar_limite2950(int valor) {
    if (valor > LIMITE_2950) return LIMITE_2950;
    return valor * FACTOR_2950;
}
