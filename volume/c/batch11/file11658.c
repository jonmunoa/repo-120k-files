// fichero 11658 -- macros y constantes -- MODIFICADO
#define LIMITE_11658 11858
#define FACTOR_11658 5

int aplicar_limite11658(int valor) {
    if (valor > LIMITE_11658) return LIMITE_11658;
    return valor * FACTOR_11658;
}
