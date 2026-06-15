// fichero 14678 -- macros y constantes -- MODIFICADO
#define LIMITE_14678 14878
#define FACTOR_14678 5

int aplicar_limite14678(int valor) {
    if (valor > LIMITE_14678) return LIMITE_14678;
    return valor * FACTOR_14678;
}
