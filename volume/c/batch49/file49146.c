// fichero 49146 -- macros y constantes
#define LIMITE_49146 49246
#define FACTOR_49146 2

int aplicar_limite49146(int valor) {
    if (valor > LIMITE_49146) return LIMITE_49146;
    return valor * FACTOR_49146;
}
