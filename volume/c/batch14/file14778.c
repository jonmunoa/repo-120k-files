// fichero 14778 -- macros y constantes -- MODIFICADO
#define LIMITE_14778 14978
#define FACTOR_14778 5

int aplicar_limite14778(int valor) {
    if (valor > LIMITE_14778) return LIMITE_14778;
    return valor * FACTOR_14778;
}
