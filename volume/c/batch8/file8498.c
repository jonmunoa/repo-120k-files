// fichero 8498 -- macros y constantes
#define LIMITE_8498 8598
#define FACTOR_8498 4

int aplicar_limite8498(int valor) {
    if (valor > LIMITE_8498) return LIMITE_8498;
    return valor * FACTOR_8498;
}
