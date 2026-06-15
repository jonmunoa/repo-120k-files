// fichero 32678 -- macros y constantes -- MODIFICADO
#define LIMITE_32678 32878
#define FACTOR_32678 5

int aplicar_limite32678(int valor) {
    if (valor > LIMITE_32678) return LIMITE_32678;
    return valor * FACTOR_32678;
}
