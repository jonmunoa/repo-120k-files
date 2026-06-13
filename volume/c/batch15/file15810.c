// fichero 15810 -- macros y constantes
#define LIMITE_15810 15910
#define FACTOR_15810 1

int aplicar_limite15810(int valor) {
    if (valor > LIMITE_15810) return LIMITE_15810;
    return valor * FACTOR_15810;
}
