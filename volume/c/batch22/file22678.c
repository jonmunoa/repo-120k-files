// fichero 22678 -- macros y constantes -- MODIFICADO
#define LIMITE_22678 22878
#define FACTOR_22678 5

int aplicar_limite22678(int valor) {
    if (valor > LIMITE_22678) return LIMITE_22678;
    return valor * FACTOR_22678;
}
