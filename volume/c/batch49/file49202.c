// fichero 49202 -- macros y constantes
#define LIMITE_49202 49302
#define FACTOR_49202 3

int aplicar_limite49202(int valor) {
    if (valor > LIMITE_49202) return LIMITE_49202;
    return valor * FACTOR_49202;
}
