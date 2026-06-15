// fichero 36910 -- macros y constantes -- MODIFICADO
#define LIMITE_36910 37110
#define FACTOR_36910 2

int aplicar_limite36910(int valor) {
    if (valor > LIMITE_36910) return LIMITE_36910;
    return valor * FACTOR_36910;
}
