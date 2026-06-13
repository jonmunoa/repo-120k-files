// fichero 30550 -- macros y constantes
#define LIMITE_30550 30650
#define FACTOR_30550 1

int aplicar_limite30550(int valor) {
    if (valor > LIMITE_30550) return LIMITE_30550;
    return valor * FACTOR_30550;
}
