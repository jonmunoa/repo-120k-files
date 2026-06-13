// fichero 4126 -- macros y constantes
#define LIMITE_4126 4226
#define FACTOR_4126 2

int aplicar_limite4126(int valor) {
    if (valor > LIMITE_4126) return LIMITE_4126;
    return valor * FACTOR_4126;
}
