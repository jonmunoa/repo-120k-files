// fichero 48942 -- macros y constantes -- MODIFICADO
#define LIMITE_48942 49142
#define FACTOR_48942 4

int aplicar_limite48942(int valor) {
    if (valor > LIMITE_48942) return LIMITE_48942;
    return valor * FACTOR_48942;
}
