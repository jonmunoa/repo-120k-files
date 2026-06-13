// fichero 31146 -- macros y constantes
#define LIMITE_31146 31246
#define FACTOR_31146 2

int aplicar_limite31146(int valor) {
    if (valor > LIMITE_31146) return LIMITE_31146;
    return valor * FACTOR_31146;
}
