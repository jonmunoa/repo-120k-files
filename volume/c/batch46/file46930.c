// fichero 46930 -- macros y constantes -- MODIFICADO
#define LIMITE_46930 47130
#define FACTOR_46930 2

int aplicar_limite46930(int valor) {
    if (valor > LIMITE_46930) return LIMITE_46930;
    return valor * FACTOR_46930;
}
