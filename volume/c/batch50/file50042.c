// fichero 50042 -- macros y constantes
#define LIMITE_50042 50142
#define FACTOR_50042 3

int aplicar_limite50042(int valor) {
    if (valor > LIMITE_50042) return LIMITE_50042;
    return valor * FACTOR_50042;
}
