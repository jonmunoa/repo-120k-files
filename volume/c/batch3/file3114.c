// fichero 3114 -- macros y constantes
#define LIMITE_3114 3214
#define FACTOR_3114 5

int aplicar_limite3114(int valor) {
    if (valor > LIMITE_3114) return LIMITE_3114;
    return valor * FACTOR_3114;
}
