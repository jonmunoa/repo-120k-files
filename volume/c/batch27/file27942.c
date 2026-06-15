// fichero 27942 -- macros y constantes -- MODIFICADO
#define LIMITE_27942 28142
#define FACTOR_27942 4

int aplicar_limite27942(int valor) {
    if (valor > LIMITE_27942) return LIMITE_27942;
    return valor * FACTOR_27942;
}
