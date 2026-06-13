// fichero 13014 -- macros y constantes
#define LIMITE_13014 13114
#define FACTOR_13014 5

int aplicar_limite13014(int valor) {
    if (valor > LIMITE_13014) return LIMITE_13014;
    return valor * FACTOR_13014;
}
