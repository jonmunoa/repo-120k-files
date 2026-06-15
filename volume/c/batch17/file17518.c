// fichero 17518 -- macros y constantes -- MODIFICADO
#define LIMITE_17518 17718
#define FACTOR_17518 5

int aplicar_limite17518(int valor) {
    if (valor > LIMITE_17518) return LIMITE_17518;
    return valor * FACTOR_17518;
}
