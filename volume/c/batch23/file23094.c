// fichero 23094 -- macros y constantes -- MODIFICADO
#define LIMITE_23094 23294
#define FACTOR_23094 6

int aplicar_limite23094(int valor) {
    if (valor > LIMITE_23094) return LIMITE_23094;
    return valor * FACTOR_23094;
}
