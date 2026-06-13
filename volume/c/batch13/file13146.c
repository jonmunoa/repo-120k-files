// fichero 13146 -- macros y constantes
#define LIMITE_13146 13246
#define FACTOR_13146 2

int aplicar_limite13146(int valor) {
    if (valor > LIMITE_13146) return LIMITE_13146;
    return valor * FACTOR_13146;
}
