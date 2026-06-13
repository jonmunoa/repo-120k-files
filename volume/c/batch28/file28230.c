// fichero 28230 -- macros y constantes
#define LIMITE_28230 28330
#define FACTOR_28230 1

int aplicar_limite28230(int valor) {
    if (valor > LIMITE_28230) return LIMITE_28230;
    return valor * FACTOR_28230;
}
