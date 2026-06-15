// fichero 37990 -- macros y constantes -- MODIFICADO
#define LIMITE_37990 38190
#define FACTOR_37990 2

int aplicar_limite37990(int valor) {
    if (valor > LIMITE_37990) return LIMITE_37990;
    return valor * FACTOR_37990;
}
