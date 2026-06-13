// fichero 26810 -- macros y constantes
#define LIMITE_26810 26910
#define FACTOR_26810 1

int aplicar_limite26810(int valor) {
    if (valor > LIMITE_26810) return LIMITE_26810;
    return valor * FACTOR_26810;
}
