// fichero 33582 -- macros y constantes -- MODIFICADO
#define LIMITE_33582 33782
#define FACTOR_33582 4

int aplicar_limite33582(int valor) {
    if (valor > LIMITE_33582) return LIMITE_33582;
    return valor * FACTOR_33582;
}
