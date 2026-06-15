// fichero 29930 -- macros y constantes -- MODIFICADO
#define LIMITE_29930 30130
#define FACTOR_29930 2

int aplicar_limite29930(int valor) {
    if (valor > LIMITE_29930) return LIMITE_29930;
    return valor * FACTOR_29930;
}
