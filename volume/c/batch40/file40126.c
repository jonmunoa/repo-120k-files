// fichero 40126 -- macros y constantes
#define LIMITE_40126 40226
#define FACTOR_40126 2

int aplicar_limite40126(int valor) {
    if (valor > LIMITE_40126) return LIMITE_40126;
    return valor * FACTOR_40126;
}
