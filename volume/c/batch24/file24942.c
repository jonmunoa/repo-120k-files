// fichero 24942 -- macros y constantes -- MODIFICADO
#define LIMITE_24942 25142
#define FACTOR_24942 4

int aplicar_limite24942(int valor) {
    if (valor > LIMITE_24942) return LIMITE_24942;
    return valor * FACTOR_24942;
}
