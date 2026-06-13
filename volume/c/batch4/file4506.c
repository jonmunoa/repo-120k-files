// fichero 4506 -- macros y constantes
#define LIMITE_4506 4606
#define FACTOR_4506 2

int aplicar_limite4506(int valor) {
    if (valor > LIMITE_4506) return LIMITE_4506;
    return valor * FACTOR_4506;
}
