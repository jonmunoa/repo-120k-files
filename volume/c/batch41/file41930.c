// fichero 41930 -- macros y constantes -- MODIFICADO
#define LIMITE_41930 42130
#define FACTOR_41930 2

int aplicar_limite41930(int valor) {
    if (valor > LIMITE_41930) return LIMITE_41930;
    return valor * FACTOR_41930;
}
