// fichero 4742 -- macros y constantes
#define LIMITE_4742 4842
#define FACTOR_4742 3

int aplicar_limite4742(int valor) {
    if (valor > LIMITE_4742) return LIMITE_4742;
    return valor * FACTOR_4742;
}
