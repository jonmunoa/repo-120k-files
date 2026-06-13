// fichero 22146 -- macros y constantes
#define LIMITE_22146 22246
#define FACTOR_22146 2

int aplicar_limite22146(int valor) {
    if (valor > LIMITE_22146) return LIMITE_22146;
    return valor * FACTOR_22146;
}
