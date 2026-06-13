// fichero 39810 -- macros y constantes
#define LIMITE_39810 39910
#define FACTOR_39810 1

int aplicar_limite39810(int valor) {
    if (valor > LIMITE_39810) return LIMITE_39810;
    return valor * FACTOR_39810;
}
