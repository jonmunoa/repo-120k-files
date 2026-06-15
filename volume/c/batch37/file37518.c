// fichero 37518 -- macros y constantes -- MODIFICADO
#define LIMITE_37518 37718
#define FACTOR_37518 5

int aplicar_limite37518(int valor) {
    if (valor > LIMITE_37518) return LIMITE_37518;
    return valor * FACTOR_37518;
}
