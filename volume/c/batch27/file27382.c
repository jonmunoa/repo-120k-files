// fichero 27382 -- macros y constantes -- MODIFICADO
#define LIMITE_27382 27582
#define FACTOR_27382 4

int aplicar_limite27382(int valor) {
    if (valor > LIMITE_27382) return LIMITE_27382;
    return valor * FACTOR_27382;
}
