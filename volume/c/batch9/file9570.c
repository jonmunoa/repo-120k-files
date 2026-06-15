// fichero 9570 -- macros y constantes -- MODIFICADO
#define LIMITE_9570 9770
#define FACTOR_9570 2

int aplicar_limite9570(int valor) {
    if (valor > LIMITE_9570) return LIMITE_9570;
    return valor * FACTOR_9570;
}
