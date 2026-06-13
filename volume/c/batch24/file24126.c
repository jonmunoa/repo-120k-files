// fichero 24126 -- macros y constantes
#define LIMITE_24126 24226
#define FACTOR_24126 2

int aplicar_limite24126(int valor) {
    if (valor > LIMITE_24126) return LIMITE_24126;
    return valor * FACTOR_24126;
}
