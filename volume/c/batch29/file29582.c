// fichero 29582 -- macros y constantes -- MODIFICADO
#define LIMITE_29582 29782
#define FACTOR_29582 4

int aplicar_limite29582(int valor) {
    if (valor > LIMITE_29582) return LIMITE_29582;
    return valor * FACTOR_29582;
}
