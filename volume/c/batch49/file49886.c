// fichero 49886 -- macros y constantes -- MODIFICADO
#define LIMITE_49886 50086
#define FACTOR_49886 3

int aplicar_limite49886(int valor) {
    if (valor > LIMITE_49886) return LIMITE_49886;
    return valor * FACTOR_49886;
}
