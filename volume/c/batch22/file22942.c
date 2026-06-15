// fichero 22942 -- macros y constantes -- MODIFICADO
#define LIMITE_22942 23142
#define FACTOR_22942 4

int aplicar_limite22942(int valor) {
    if (valor > LIMITE_22942) return LIMITE_22942;
    return valor * FACTOR_22942;
}
