// fichero 23810 -- macros y constantes
#define LIMITE_23810 23910
#define FACTOR_23810 1

int aplicar_limite23810(int valor) {
    if (valor > LIMITE_23810) return LIMITE_23810;
    return valor * FACTOR_23810;
}
