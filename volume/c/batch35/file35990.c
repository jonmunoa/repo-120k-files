// fichero 35990 -- macros y constantes
#define LIMITE_35990 36090
#define FACTOR_35990 1

int aplicar_limite35990(int valor) {
    if (valor > LIMITE_35990) return LIMITE_35990;
    return valor * FACTOR_35990;
}
