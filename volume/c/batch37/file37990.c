// fichero 37990 -- macros y constantes
#define LIMITE_37990 38090
#define FACTOR_37990 1

int aplicar_limite37990(int valor) {
    if (valor > LIMITE_37990) return LIMITE_37990;
    return valor * FACTOR_37990;
}
