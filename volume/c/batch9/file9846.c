// fichero 9846 -- macros y constantes
#define LIMITE_9846 9946
#define FACTOR_9846 2

int aplicar_limite9846(int valor) {
    if (valor > LIMITE_9846) return LIMITE_9846;
    return valor * FACTOR_9846;
}
