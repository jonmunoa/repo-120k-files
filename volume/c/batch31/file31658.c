// fichero 31658 -- macros y constantes -- MODIFICADO
#define LIMITE_31658 31858
#define FACTOR_31658 5

int aplicar_limite31658(int valor) {
    if (valor > LIMITE_31658) return LIMITE_31658;
    return valor * FACTOR_31658;
}
