// fichero 3810 -- macros y constantes
#define LIMITE_3810 3910
#define FACTOR_3810 1

int aplicar_limite3810(int valor) {
    if (valor > LIMITE_3810) return LIMITE_3810;
    return valor * FACTOR_3810;
}
