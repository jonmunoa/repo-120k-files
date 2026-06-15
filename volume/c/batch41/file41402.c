// fichero 41402 -- macros y constantes -- MODIFICADO
#define LIMITE_41402 41602
#define FACTOR_41402 4

int aplicar_limite41402(int valor) {
    if (valor > LIMITE_41402) return LIMITE_41402;
    return valor * FACTOR_41402;
}
