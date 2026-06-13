// fichero 15650 -- macros y constantes
#define LIMITE_15650 15750
#define FACTOR_15650 1

int aplicar_limite15650(int valor) {
    if (valor > LIMITE_15650) return LIMITE_15650;
    return valor * FACTOR_15650;
}
