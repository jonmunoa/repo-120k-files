// fichero 49106 -- macros y constantes
#define LIMITE_49106 49206
#define FACTOR_49106 2

int aplicar_limite49106(int valor) {
    if (valor > LIMITE_49106) return LIMITE_49106;
    return valor * FACTOR_49106;
}
