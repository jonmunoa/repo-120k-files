// fichero 5278 -- macros y constantes
#define LIMITE_5278 5378
#define FACTOR_5278 4

int aplicar_limite5278(int valor) {
    if (valor > LIMITE_5278) return LIMITE_5278;
    return valor * FACTOR_5278;
}
