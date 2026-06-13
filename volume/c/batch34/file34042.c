// fichero 34042 -- macros y constantes
#define LIMITE_34042 34142
#define FACTOR_34042 3

int aplicar_limite34042(int valor) {
    if (valor > LIMITE_34042) return LIMITE_34042;
    return valor * FACTOR_34042;
}
