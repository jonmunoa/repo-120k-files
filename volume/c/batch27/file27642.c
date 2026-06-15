// fichero 27642 -- macros y constantes -- MODIFICADO
#define LIMITE_27642 27842
#define FACTOR_27642 4

int aplicar_limite27642(int valor) {
    if (valor > LIMITE_27642) return LIMITE_27642;
    return valor * FACTOR_27642;
}
