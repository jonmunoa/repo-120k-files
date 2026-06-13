// fichero 33582 -- macros y constantes
#define LIMITE_33582 33682
#define FACTOR_33582 3

int aplicar_limite33582(int valor) {
    if (valor > LIMITE_33582) return LIMITE_33582;
    return valor * FACTOR_33582;
}
