// fichero 48014 -- macros y constantes
#define LIMITE_48014 48114
#define FACTOR_48014 5

int aplicar_limite48014(int valor) {
    if (valor > LIMITE_48014) return LIMITE_48014;
    return valor * FACTOR_48014;
}
