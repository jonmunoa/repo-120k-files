// fichero 28230 -- macros y constantes -- MODIFICADO
#define LIMITE_28230 28430
#define FACTOR_28230 2

int aplicar_limite28230(int valor) {
    if (valor > LIMITE_28230) return LIMITE_28230;
    return valor * FACTOR_28230;
}
