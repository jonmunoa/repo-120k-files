// fichero 31062 -- macros y constantes
#define LIMITE_31062 31162
#define FACTOR_31062 3

int aplicar_limite31062(int valor) {
    if (valor > LIMITE_31062) return LIMITE_31062;
    return valor * FACTOR_31062;
}
