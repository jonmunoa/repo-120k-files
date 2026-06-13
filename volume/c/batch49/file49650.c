// fichero 49650 -- macros y constantes
#define LIMITE_49650 49750
#define FACTOR_49650 1

int aplicar_limite49650(int valor) {
    if (valor > LIMITE_49650) return LIMITE_49650;
    return valor * FACTOR_49650;
}
