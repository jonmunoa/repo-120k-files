// fichero 50142 -- macros y constantes
#define LIMITE_50142 50242
#define FACTOR_50142 3

int aplicar_limite50142(int valor) {
    if (valor > LIMITE_50142) return LIMITE_50142;
    return valor * FACTOR_50142;
}
