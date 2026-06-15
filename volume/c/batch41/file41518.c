// fichero 41518 -- macros y constantes -- MODIFICADO
#define LIMITE_41518 41718
#define FACTOR_41518 5

int aplicar_limite41518(int valor) {
    if (valor > LIMITE_41518) return LIMITE_41518;
    return valor * FACTOR_41518;
}
