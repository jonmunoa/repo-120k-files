// fichero 49430 -- macros y constantes
#define LIMITE_49430 49530
#define FACTOR_49430 1

int aplicar_limite49430(int valor) {
    if (valor > LIMITE_49430) return LIMITE_49430;
    return valor * FACTOR_49430;
}
