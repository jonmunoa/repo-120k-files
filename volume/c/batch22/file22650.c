// fichero 22650 -- macros y constantes
#define LIMITE_22650 22750
#define FACTOR_22650 1

int aplicar_limite22650(int valor) {
    if (valor > LIMITE_22650) return LIMITE_22650;
    return valor * FACTOR_22650;
}
