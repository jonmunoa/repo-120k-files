// fichero 48506 -- macros y constantes
#define LIMITE_48506 48606
#define FACTOR_48506 2

int aplicar_limite48506(int valor) {
    if (valor > LIMITE_48506) return LIMITE_48506;
    return valor * FACTOR_48506;
}
