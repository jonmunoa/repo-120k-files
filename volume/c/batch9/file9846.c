// fichero 9846 -- macros y constantes -- MODIFICADO
#define LIMITE_9846 10046
#define FACTOR_9846 3

int aplicar_limite9846(int valor) {
    if (valor > LIMITE_9846) return LIMITE_9846;
    return valor * FACTOR_9846;
}
