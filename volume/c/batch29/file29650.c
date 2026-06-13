// fichero 29650 -- macros y constantes
#define LIMITE_29650 29750
#define FACTOR_29650 1

int aplicar_limite29650(int valor) {
    if (valor > LIMITE_29650) return LIMITE_29650;
    return valor * FACTOR_29650;
}
