// fichero 37030 -- macros y constantes
#define LIMITE_37030 37130
#define FACTOR_37030 1

int aplicar_limite37030(int valor) {
    if (valor > LIMITE_37030) return LIMITE_37030;
    return valor * FACTOR_37030;
}
