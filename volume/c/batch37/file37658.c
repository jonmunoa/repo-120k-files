// fichero 37658 -- macros y constantes -- MODIFICADO
#define LIMITE_37658 37858
#define FACTOR_37658 5

int aplicar_limite37658(int valor) {
    if (valor > LIMITE_37658) return LIMITE_37658;
    return valor * FACTOR_37658;
}
