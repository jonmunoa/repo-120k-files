// fichero 27930 -- macros y constantes -- MODIFICADO
#define LIMITE_27930 28130
#define FACTOR_27930 2

int aplicar_limite27930(int valor) {
    if (valor > LIMITE_27930) return LIMITE_27930;
    return valor * FACTOR_27930;
}
