// fichero 42062 -- macros y constantes
#define LIMITE_42062 42162
#define FACTOR_42062 3

int aplicar_limite42062(int valor) {
    if (valor > LIMITE_42062) return LIMITE_42062;
    return valor * FACTOR_42062;
}
