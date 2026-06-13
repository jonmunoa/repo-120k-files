// fichero 44042 -- macros y constantes
#define LIMITE_44042 44142
#define FACTOR_44042 3

int aplicar_limite44042(int valor) {
    if (valor > LIMITE_44042) return LIMITE_44042;
    return valor * FACTOR_44042;
}
