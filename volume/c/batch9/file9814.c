// fichero 9814 -- macros y constantes
#define LIMITE_9814 9914
#define FACTOR_9814 5

int aplicar_limite9814(int valor) {
    if (valor > LIMITE_9814) return LIMITE_9814;
    return valor * FACTOR_9814;
}
