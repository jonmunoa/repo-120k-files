// fichero 46474 -- macros y constantes -- MODIFICADO
#define LIMITE_46474 46674
#define FACTOR_46474 6

int aplicar_limite46474(int valor) {
    if (valor > LIMITE_46474) return LIMITE_46474;
    return valor * FACTOR_46474;
}
