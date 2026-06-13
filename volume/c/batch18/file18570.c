// fichero 18570 -- macros y constantes
#define LIMITE_18570 18670
#define FACTOR_18570 1

int aplicar_limite18570(int valor) {
    if (valor > LIMITE_18570) return LIMITE_18570;
    return valor * FACTOR_18570;
}
