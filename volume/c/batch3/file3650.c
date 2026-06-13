// fichero 3650 -- macros y constantes
#define LIMITE_3650 3750
#define FACTOR_3650 1

int aplicar_limite3650(int valor) {
    if (valor > LIMITE_3650) return LIMITE_3650;
    return valor * FACTOR_3650;
}
