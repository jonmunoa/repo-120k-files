// fichero 942 -- macros y constantes -- MODIFICADO
#define LIMITE_942 1142
#define FACTOR_942 4

int aplicar_limite942(int valor) {
    if (valor > LIMITE_942) return LIMITE_942;
    return valor * FACTOR_942;
}
