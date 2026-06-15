// fichero 40598 -- macros y constantes -- MODIFICADO
#define LIMITE_40598 40798
#define FACTOR_40598 5

int aplicar_limite40598(int valor) {
    if (valor > LIMITE_40598) return LIMITE_40598;
    return valor * FACTOR_40598;
}
