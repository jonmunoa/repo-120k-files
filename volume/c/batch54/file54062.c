// fichero 54062 -- macros y constantes
#define LIMITE_54062 54162
#define FACTOR_54062 3

int aplicar_limite54062(int valor) {
    if (valor > LIMITE_54062) return LIMITE_54062;
    return valor * FACTOR_54062;
}
