// fichero 31930 -- macros y constantes -- MODIFICADO
#define LIMITE_31930 32130
#define FACTOR_31930 2

int aplicar_limite31930(int valor) {
    if (valor > LIMITE_31930) return LIMITE_31930;
    return valor * FACTOR_31930;
}
