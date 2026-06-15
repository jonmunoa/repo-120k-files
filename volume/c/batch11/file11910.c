// fichero 11910 -- macros y constantes -- MODIFICADO
#define LIMITE_11910 12110
#define FACTOR_11910 2

int aplicar_limite11910(int valor) {
    if (valor > LIMITE_11910) return LIMITE_11910;
    return valor * FACTOR_11910;
}
