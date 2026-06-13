// fichero 49818 -- macros y constantes
#define LIMITE_49818 49918
#define FACTOR_49818 4

int aplicar_limite49818(int valor) {
    if (valor > LIMITE_49818) return LIMITE_49818;
    return valor * FACTOR_49818;
}
