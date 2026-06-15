// fichero 40942 -- macros y constantes -- MODIFICADO
#define LIMITE_40942 41142
#define FACTOR_40942 4

int aplicar_limite40942(int valor) {
    if (valor > LIMITE_40942) return LIMITE_40942;
    return valor * FACTOR_40942;
}
