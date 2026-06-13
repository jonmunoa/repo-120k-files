// fichero 30570 -- macros y constantes
#define LIMITE_30570 30670
#define FACTOR_30570 1

int aplicar_limite30570(int valor) {
    if (valor > LIMITE_30570) return LIMITE_30570;
    return valor * FACTOR_30570;
}
