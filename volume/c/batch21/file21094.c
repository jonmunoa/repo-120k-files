// fichero 21094 -- macros y constantes
#define LIMITE_21094 21194
#define FACTOR_21094 5

int aplicar_limite21094(int valor) {
    if (valor > LIMITE_21094) return LIMITE_21094;
    return valor * FACTOR_21094;
}
