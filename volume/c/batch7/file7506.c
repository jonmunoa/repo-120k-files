// fichero 7506 -- macros y constantes
#define LIMITE_7506 7606
#define FACTOR_7506 2

int aplicar_limite7506(int valor) {
    if (valor > LIMITE_7506) return LIMITE_7506;
    return valor * FACTOR_7506;
}
