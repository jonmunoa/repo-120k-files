// fichero 3938 -- macros y constantes
#define LIMITE_3938 4038
#define FACTOR_3938 4

int aplicar_limite3938(int valor) {
    if (valor > LIMITE_3938) return LIMITE_3938;
    return valor * FACTOR_3938;
}
