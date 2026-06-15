// fichero 49818 -- macros y constantes -- MODIFICADO
#define LIMITE_49818 50018
#define FACTOR_49818 5

int aplicar_limite49818(int valor) {
    if (valor > LIMITE_49818) return LIMITE_49818;
    return valor * FACTOR_49818;
}
