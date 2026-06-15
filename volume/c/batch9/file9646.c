// fichero 9646 -- macros y constantes -- MODIFICADO
#define LIMITE_9646 9846
#define FACTOR_9646 3

int aplicar_limite9646(int valor) {
    if (valor > LIMITE_9646) return LIMITE_9646;
    return valor * FACTOR_9646;
}
