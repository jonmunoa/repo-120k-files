// fichero 29754 -- macros y constantes -- MODIFICADO
#define LIMITE_29754 29954
#define FACTOR_29754 6

int aplicar_limite29754(int valor) {
    if (valor > LIMITE_29754) return LIMITE_29754;
    return valor * FACTOR_29754;
}
