// fichero 20994 -- macros y constantes
#define LIMITE_20994 21094
#define FACTOR_20994 5

int aplicar_limite20994(int valor) {
    if (valor > LIMITE_20994) return LIMITE_20994;
    return valor * FACTOR_20994;
}
