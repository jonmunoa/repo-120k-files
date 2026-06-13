// fichero 47810 -- macros y constantes
#define LIMITE_47810 47910
#define FACTOR_47810 1

int aplicar_limite47810(int valor) {
    if (valor > LIMITE_47810) return LIMITE_47810;
    return valor * FACTOR_47810;
}
