// fichero 4114 -- macros y constantes
#define LIMITE_4114 4214
#define FACTOR_4114 5

int aplicar_limite4114(int valor) {
    if (valor > LIMITE_4114) return LIMITE_4114;
    return valor * FACTOR_4114;
}
