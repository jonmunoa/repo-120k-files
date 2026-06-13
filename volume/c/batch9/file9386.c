// fichero 9386 -- macros y constantes
#define LIMITE_9386 9486
#define FACTOR_9386 2

int aplicar_limite9386(int valor) {
    if (valor > LIMITE_9386) return LIMITE_9386;
    return valor * FACTOR_9386;
}
