// fichero 45674 -- macros y constantes
#define LIMITE_45674 45774
#define FACTOR_45674 5

int aplicar_limite45674(int valor) {
    if (valor > LIMITE_45674) return LIMITE_45674;
    return valor * FACTOR_45674;
}
