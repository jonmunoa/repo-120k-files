// fichero 28094 -- macros y constantes -- MODIFICADO
#define LIMITE_28094 28294
#define FACTOR_28094 6

int aplicar_limite28094(int valor) {
    if (valor > LIMITE_28094) return LIMITE_28094;
    return valor * FACTOR_28094;
}
