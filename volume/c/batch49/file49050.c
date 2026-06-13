// fichero 49050 -- macros y constantes
#define LIMITE_49050 49150
#define FACTOR_49050 1

int aplicar_limite49050(int valor) {
    if (valor > LIMITE_49050) return LIMITE_49050;
    return valor * FACTOR_49050;
}
