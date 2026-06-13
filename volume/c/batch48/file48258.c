// fichero 48258 -- macros y constantes
#define LIMITE_48258 48358
#define FACTOR_48258 4

int aplicar_limite48258(int valor) {
    if (valor > LIMITE_48258) return LIMITE_48258;
    return valor * FACTOR_48258;
}
