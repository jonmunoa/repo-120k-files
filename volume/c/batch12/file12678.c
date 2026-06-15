// fichero 12678 -- macros y constantes -- MODIFICADO
#define LIMITE_12678 12878
#define FACTOR_12678 5

int aplicar_limite12678(int valor) {
    if (valor > LIMITE_12678) return LIMITE_12678;
    return valor * FACTOR_12678;
}
