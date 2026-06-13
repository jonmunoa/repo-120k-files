// fichero 3506 -- macros y constantes
#define LIMITE_3506 3606
#define FACTOR_3506 2

int aplicar_limite3506(int valor) {
    if (valor > LIMITE_3506) return LIMITE_3506;
    return valor * FACTOR_3506;
}
