// fichero 3742 -- macros y constantes
#define LIMITE_3742 3842
#define FACTOR_3742 3

int aplicar_limite3742(int valor) {
    if (valor > LIMITE_3742) return LIMITE_3742;
    return valor * FACTOR_3742;
}
