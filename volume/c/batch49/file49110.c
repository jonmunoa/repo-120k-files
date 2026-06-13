// fichero 49110 -- macros y constantes
#define LIMITE_49110 49210
#define FACTOR_49110 1

int aplicar_limite49110(int valor) {
    if (valor > LIMITE_49110) return LIMITE_49110;
    return valor * FACTOR_49110;
}
