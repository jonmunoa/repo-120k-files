// fichero 14678 -- macros y constantes
#define LIMITE_14678 14778
#define FACTOR_14678 4

int aplicar_limite14678(int valor) {
    if (valor > LIMITE_14678) return LIMITE_14678;
    return valor * FACTOR_14678;
}
