// fichero 22930 -- macros y constantes -- MODIFICADO
#define LIMITE_22930 23130
#define FACTOR_22930 2

int aplicar_limite22930(int valor) {
    if (valor > LIMITE_22930) return LIMITE_22930;
    return valor * FACTOR_22930;
}
