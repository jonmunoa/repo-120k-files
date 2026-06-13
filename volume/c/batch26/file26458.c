// fichero 26458 -- macros y constantes
#define LIMITE_26458 26558
#define FACTOR_26458 4

int aplicar_limite26458(int valor) {
    if (valor > LIMITE_26458) return LIMITE_26458;
    return valor * FACTOR_26458;
}
