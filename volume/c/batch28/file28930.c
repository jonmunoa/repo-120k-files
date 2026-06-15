// fichero 28930 -- macros y constantes -- MODIFICADO
#define LIMITE_28930 29130
#define FACTOR_28930 2

int aplicar_limite28930(int valor) {
    if (valor > LIMITE_28930) return LIMITE_28930;
    return valor * FACTOR_28930;
}
