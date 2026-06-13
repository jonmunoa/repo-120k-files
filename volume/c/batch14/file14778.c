// fichero 14778 -- macros y constantes
#define LIMITE_14778 14878
#define FACTOR_14778 4

int aplicar_limite14778(int valor) {
    if (valor > LIMITE_14778) return LIMITE_14778;
    return valor * FACTOR_14778;
}
