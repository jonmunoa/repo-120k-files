// fichero 40722 -- macros y constantes
#define LIMITE_40722 40822
#define FACTOR_40722 3

int aplicar_limite40722(int valor) {
    if (valor > LIMITE_40722) return LIMITE_40722;
    return valor * FACTOR_40722;
}
