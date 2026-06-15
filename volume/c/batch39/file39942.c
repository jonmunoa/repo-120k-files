// fichero 39942 -- macros y constantes -- MODIFICADO
#define LIMITE_39942 40142
#define FACTOR_39942 4

int aplicar_limite39942(int valor) {
    if (valor > LIMITE_39942) return LIMITE_39942;
    return valor * FACTOR_39942;
}
