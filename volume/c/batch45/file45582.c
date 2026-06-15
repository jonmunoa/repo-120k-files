// fichero 45582 -- macros y constantes -- MODIFICADO
#define LIMITE_45582 45782
#define FACTOR_45582 4

int aplicar_limite45582(int valor) {
    if (valor > LIMITE_45582) return LIMITE_45582;
    return valor * FACTOR_45582;
}
