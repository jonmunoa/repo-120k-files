// fichero 49886 -- macros y constantes
#define LIMITE_49886 49986
#define FACTOR_49886 2

int aplicar_limite49886(int valor) {
    if (valor > LIMITE_49886) return LIMITE_49886;
    return valor * FACTOR_49886;
}
