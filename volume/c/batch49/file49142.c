// fichero 49142 -- macros y constantes
#define LIMITE_49142 49242
#define FACTOR_49142 3

int aplicar_limite49142(int valor) {
    if (valor > LIMITE_49142) return LIMITE_49142;
    return valor * FACTOR_49142;
}
