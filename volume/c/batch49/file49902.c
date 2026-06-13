// fichero 49902 -- macros y constantes
#define LIMITE_49902 50002
#define FACTOR_49902 3

int aplicar_limite49902(int valor) {
    if (valor > LIMITE_49902) return LIMITE_49902;
    return valor * FACTOR_49902;
}
