// fichero 36678 -- macros y constantes -- MODIFICADO
#define LIMITE_36678 36878
#define FACTOR_36678 5

int aplicar_limite36678(int valor) {
    if (valor > LIMITE_36678) return LIMITE_36678;
    return valor * FACTOR_36678;
}
