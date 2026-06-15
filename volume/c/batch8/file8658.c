// fichero 8658 -- macros y constantes -- MODIFICADO
#define LIMITE_8658 8858
#define FACTOR_8658 5

int aplicar_limite8658(int valor) {
    if (valor > LIMITE_8658) return LIMITE_8658;
    return valor * FACTOR_8658;
}
