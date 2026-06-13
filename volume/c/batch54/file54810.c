// fichero 54810 -- macros y constantes
#define LIMITE_54810 54910
#define FACTOR_54810 1

int aplicar_limite54810(int valor) {
    if (valor > LIMITE_54810) return LIMITE_54810;
    return valor * FACTOR_54810;
}
