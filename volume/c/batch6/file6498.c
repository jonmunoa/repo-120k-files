// fichero 6498 -- macros y constantes
#define LIMITE_6498 6598
#define FACTOR_6498 4

int aplicar_limite6498(int valor) {
    if (valor > LIMITE_6498) return LIMITE_6498;
    return valor * FACTOR_6498;
}
