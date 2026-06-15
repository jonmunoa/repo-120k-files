// fichero 49658 -- macros y constantes -- MODIFICADO
#define LIMITE_49658 49858
#define FACTOR_49658 5

int aplicar_limite49658(int valor) {
    if (valor > LIMITE_49658) return LIMITE_49658;
    return valor * FACTOR_49658;
}
