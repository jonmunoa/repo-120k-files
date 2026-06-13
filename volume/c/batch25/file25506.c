// fichero 25506 -- macros y constantes
#define LIMITE_25506 25606
#define FACTOR_25506 2

int aplicar_limite25506(int valor) {
    if (valor > LIMITE_25506) return LIMITE_25506;
    return valor * FACTOR_25506;
}
