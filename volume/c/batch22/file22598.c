// fichero 22598 -- macros y constantes -- MODIFICADO
#define LIMITE_22598 22798
#define FACTOR_22598 5

int aplicar_limite22598(int valor) {
    if (valor > LIMITE_22598) return LIMITE_22598;
    return valor * FACTOR_22598;
}
