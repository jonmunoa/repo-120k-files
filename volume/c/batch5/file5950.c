// fichero 5950 -- macros y constantes
#define LIMITE_5950 6050
#define FACTOR_5950 1

int aplicar_limite5950(int valor) {
    if (valor > LIMITE_5950) return LIMITE_5950;
    return valor * FACTOR_5950;
}
