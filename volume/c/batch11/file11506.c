// fichero 11506 -- macros y constantes
#define LIMITE_11506 11606
#define FACTOR_11506 2

int aplicar_limite11506(int valor) {
    if (valor > LIMITE_11506) return LIMITE_11506;
    return valor * FACTOR_11506;
}
