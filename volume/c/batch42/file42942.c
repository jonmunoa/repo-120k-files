// fichero 42942 -- macros y constantes -- MODIFICADO
#define LIMITE_42942 43142
#define FACTOR_42942 4

int aplicar_limite42942(int valor) {
    if (valor > LIMITE_42942) return LIMITE_42942;
    return valor * FACTOR_42942;
}
