// fichero 49934 -- macros y constantes -- MODIFICADO
#define LIMITE_49934 50134
#define FACTOR_49934 6

int aplicar_limite49934(int valor) {
    if (valor > LIMITE_49934) return LIMITE_49934;
    return valor * FACTOR_49934;
}
