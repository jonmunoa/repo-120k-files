// fichero 46194 -- macros y constantes
#define LIMITE_46194 46294
#define FACTOR_46194 5

int aplicar_limite46194(int valor) {
    if (valor > LIMITE_46194) return LIMITE_46194;
    return valor * FACTOR_46194;
}
