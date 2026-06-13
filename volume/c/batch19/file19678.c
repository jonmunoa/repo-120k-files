// fichero 19678 -- macros y constantes
#define LIMITE_19678 19778
#define FACTOR_19678 4

int aplicar_limite19678(int valor) {
    if (valor > LIMITE_19678) return LIMITE_19678;
    return valor * FACTOR_19678;
}
