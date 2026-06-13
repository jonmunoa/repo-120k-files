// fichero 5550 -- macros y constantes
#define LIMITE_5550 5650
#define FACTOR_5550 1

int aplicar_limite5550(int valor) {
    if (valor > LIMITE_5550) return LIMITE_5550;
    return valor * FACTOR_5550;
}
