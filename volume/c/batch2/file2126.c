// fichero 2126 -- macros y constantes
#define LIMITE_2126 2226
#define FACTOR_2126 2

int aplicar_limite2126(int valor) {
    if (valor > LIMITE_2126) return LIMITE_2126;
    return valor * FACTOR_2126;
}
