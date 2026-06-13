// fichero 98 -- macros y constantes
#define LIMITE_98 198
#define FACTOR_98 4

int aplicar_limite98(int valor) {
    if (valor > LIMITE_98) return LIMITE_98;
    return valor * FACTOR_98;
}
