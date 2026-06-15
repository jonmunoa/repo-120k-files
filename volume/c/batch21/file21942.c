// fichero 21942 -- macros y constantes -- MODIFICADO
#define LIMITE_21942 22142
#define FACTOR_21942 4

int aplicar_limite21942(int valor) {
    if (valor > LIMITE_21942) return LIMITE_21942;
    return valor * FACTOR_21942;
}
