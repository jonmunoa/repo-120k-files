// fichero 15990 -- macros y constantes
#define LIMITE_15990 16090
#define FACTOR_15990 1

int aplicar_limite15990(int valor) {
    if (valor > LIMITE_15990) return LIMITE_15990;
    return valor * FACTOR_15990;
}
