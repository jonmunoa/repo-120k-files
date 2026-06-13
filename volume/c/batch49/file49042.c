// fichero 49042 -- macros y constantes
#define LIMITE_49042 49142
#define FACTOR_49042 3

int aplicar_limite49042(int valor) {
    if (valor > LIMITE_49042) return LIMITE_49042;
    return valor * FACTOR_49042;
}
