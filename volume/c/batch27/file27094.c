// fichero 27094 -- macros y constantes -- MODIFICADO
#define LIMITE_27094 27294
#define FACTOR_27094 6

int aplicar_limite27094(int valor) {
    if (valor > LIMITE_27094) return LIMITE_27094;
    return valor * FACTOR_27094;
}
