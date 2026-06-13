// fichero 32810 -- macros y constantes
#define LIMITE_32810 32910
#define FACTOR_32810 1

int aplicar_limite32810(int valor) {
    if (valor > LIMITE_32810) return LIMITE_32810;
    return valor * FACTOR_32810;
}
