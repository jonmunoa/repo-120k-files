// fichero 33942 -- macros y constantes -- MODIFICADO
#define LIMITE_33942 34142
#define FACTOR_33942 4

int aplicar_limite33942(int valor) {
    if (valor > LIMITE_33942) return LIMITE_33942;
    return valor * FACTOR_33942;
}
