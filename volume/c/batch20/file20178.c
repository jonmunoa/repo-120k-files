// fichero 20178 -- macros y constantes
#define LIMITE_20178 20278
#define FACTOR_20178 4

int aplicar_limite20178(int valor) {
    if (valor > LIMITE_20178) return LIMITE_20178;
    return valor * FACTOR_20178;
}
