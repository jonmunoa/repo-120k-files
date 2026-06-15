// fichero 27758 -- macros y constantes -- MODIFICADO
#define LIMITE_27758 27958
#define FACTOR_27758 5

int aplicar_limite27758(int valor) {
    if (valor > LIMITE_27758) return LIMITE_27758;
    return valor * FACTOR_27758;
}
