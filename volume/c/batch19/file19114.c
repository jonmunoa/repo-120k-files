// fichero 19114 -- macros y constantes
#define LIMITE_19114 19214
#define FACTOR_19114 5

int aplicar_limite19114(int valor) {
    if (valor > LIMITE_19114) return LIMITE_19114;
    return valor * FACTOR_19114;
}
