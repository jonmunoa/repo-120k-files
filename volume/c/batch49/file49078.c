// fichero 49078 -- macros y constantes
#define LIMITE_49078 49178
#define FACTOR_49078 4

int aplicar_limite49078(int valor) {
    if (valor > LIMITE_49078) return LIMITE_49078;
    return valor * FACTOR_49078;
}
