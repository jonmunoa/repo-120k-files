// fichero 27582 -- macros y constantes -- MODIFICADO
#define LIMITE_27582 27782
#define FACTOR_27582 4

int aplicar_limite27582(int valor) {
    if (valor > LIMITE_27582) return LIMITE_27582;
    return valor * FACTOR_27582;
}
