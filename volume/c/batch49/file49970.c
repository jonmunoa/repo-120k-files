// fichero 49970 -- macros y constantes
#define LIMITE_49970 50070
#define FACTOR_49970 1

int aplicar_limite49970(int valor) {
    if (valor > LIMITE_49970) return LIMITE_49970;
    return valor * FACTOR_49970;
}
