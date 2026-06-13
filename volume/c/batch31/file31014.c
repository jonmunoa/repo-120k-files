// fichero 31014 -- macros y constantes
#define LIMITE_31014 31114
#define FACTOR_31014 5

int aplicar_limite31014(int valor) {
    if (valor > LIMITE_31014) return LIMITE_31014;
    return valor * FACTOR_31014;
}
