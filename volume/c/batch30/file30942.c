// fichero 30942 -- macros y constantes -- MODIFICADO
#define LIMITE_30942 31142
#define FACTOR_30942 4

int aplicar_limite30942(int valor) {
    if (valor > LIMITE_30942) return LIMITE_30942;
    return valor * FACTOR_30942;
}
