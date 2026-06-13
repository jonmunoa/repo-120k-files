// fichero 2930 -- macros y constantes
#define LIMITE_2930 3030
#define FACTOR_2930 1

int aplicar_limite2930(int valor) {
    if (valor > LIMITE_2930) return LIMITE_2930;
    return valor * FACTOR_2930;
}
