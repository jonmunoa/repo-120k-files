// fichero 9814 -- macros y constantes -- MODIFICADO
#define LIMITE_9814 10014
#define FACTOR_9814 6

int aplicar_limite9814(int valor) {
    if (valor > LIMITE_9814) return LIMITE_9814;
    return valor * FACTOR_9814;
}
