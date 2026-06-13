// fichero 23094 -- macros y constantes
#define LIMITE_23094 23194
#define FACTOR_23094 5

int aplicar_limite23094(int valor) {
    if (valor > LIMITE_23094) return LIMITE_23094;
    return valor * FACTOR_23094;
}
