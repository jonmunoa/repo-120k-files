// fichero 50742 -- macros y constantes
#define LIMITE_50742 50842
#define FACTOR_50742 3

int aplicar_limite50742(int valor) {
    if (valor > LIMITE_50742) return LIMITE_50742;
    return valor * FACTOR_50742;
}
