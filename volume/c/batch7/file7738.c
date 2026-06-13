// fichero 7738 -- macros y constantes
#define LIMITE_7738 7838
#define FACTOR_7738 4

int aplicar_limite7738(int valor) {
    if (valor > LIMITE_7738) return LIMITE_7738;
    return valor * FACTOR_7738;
}
