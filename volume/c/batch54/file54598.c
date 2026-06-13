// fichero 54598 -- macros y constantes
#define LIMITE_54598 54698
#define FACTOR_54598 4

int aplicar_limite54598(int valor) {
    if (valor > LIMITE_54598) return LIMITE_54598;
    return valor * FACTOR_54598;
}
