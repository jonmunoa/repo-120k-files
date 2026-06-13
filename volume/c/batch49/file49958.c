// fichero 49958 -- macros y constantes
#define LIMITE_49958 50058
#define FACTOR_49958 4

int aplicar_limite49958(int valor) {
    if (valor > LIMITE_49958) return LIMITE_49958;
    return valor * FACTOR_49958;
}
