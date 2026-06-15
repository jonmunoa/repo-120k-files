// fichero 24518 -- macros y constantes -- MODIFICADO
#define LIMITE_24518 24718
#define FACTOR_24518 5

int aplicar_limite24518(int valor) {
    if (valor > LIMITE_24518) return LIMITE_24518;
    return valor * FACTOR_24518;
}
