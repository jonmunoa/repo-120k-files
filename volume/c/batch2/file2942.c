// fichero 2942 -- macros y constantes -- MODIFICADO
#define LIMITE_2942 3142
#define FACTOR_2942 4

int aplicar_limite2942(int valor) {
    if (valor > LIMITE_2942) return LIMITE_2942;
    return valor * FACTOR_2942;
}
