// fichero 30250 -- macros y constantes
#define LIMITE_30250 30350
#define FACTOR_30250 1

int aplicar_limite30250(int valor) {
    if (valor > LIMITE_30250) return LIMITE_30250;
    return valor * FACTOR_30250;
}
