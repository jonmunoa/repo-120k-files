// fichero 2930 -- macros y constantes -- MODIFICADO
#define LIMITE_2930 3130
#define FACTOR_2930 2

int aplicar_limite2930(int valor) {
    if (valor > LIMITE_2930) return LIMITE_2930;
    return valor * FACTOR_2930;
}
