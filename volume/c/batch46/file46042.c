// fichero 46042 -- macros y constantes
#define LIMITE_46042 46142
#define FACTOR_46042 3

int aplicar_limite46042(int valor) {
    if (valor > LIMITE_46042) return LIMITE_46042;
    return valor * FACTOR_46042;
}
