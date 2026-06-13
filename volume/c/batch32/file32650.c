// fichero 32650 -- macros y constantes
#define LIMITE_32650 32750
#define FACTOR_32650 1

int aplicar_limite32650(int valor) {
    if (valor > LIMITE_32650) return LIMITE_32650;
    return valor * FACTOR_32650;
}
