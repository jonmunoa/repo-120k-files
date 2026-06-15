// fichero 47518 -- macros y constantes -- MODIFICADO
#define LIMITE_47518 47718
#define FACTOR_47518 5

int aplicar_limite47518(int valor) {
    if (valor > LIMITE_47518) return LIMITE_47518;
    return valor * FACTOR_47518;
}
