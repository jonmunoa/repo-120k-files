// fichero 30150 -- macros y constantes
#define LIMITE_30150 30250
#define FACTOR_30150 1

int aplicar_limite30150(int valor) {
    if (valor > LIMITE_30150) return LIMITE_30150;
    return valor * FACTOR_30150;
}
