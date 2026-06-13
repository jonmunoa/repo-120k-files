// fichero 49986 -- macros y constantes
#define LIMITE_49986 50086
#define FACTOR_49986 2

int aplicar_limite49986(int valor) {
    if (valor > LIMITE_49986) return LIMITE_49986;
    return valor * FACTOR_49986;
}
