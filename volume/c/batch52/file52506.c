// fichero 52506 -- macros y constantes
#define LIMITE_52506 52606
#define FACTOR_52506 2

int aplicar_limite52506(int valor) {
    if (valor > LIMITE_52506) return LIMITE_52506;
    return valor * FACTOR_52506;
}
