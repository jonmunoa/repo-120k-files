// fichero 9002 -- macros y constantes -- MODIFICADO
#define LIMITE_9002 9202
#define FACTOR_9002 4

int aplicar_limite9002(int valor) {
    if (valor > LIMITE_9002) return LIMITE_9002;
    return valor * FACTOR_9002;
}
