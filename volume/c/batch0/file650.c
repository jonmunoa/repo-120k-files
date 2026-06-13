// fichero 650 -- macros y constantes
#define LIMITE_650 750
#define FACTOR_650 1

int aplicar_limite650(int valor) {
    if (valor > LIMITE_650) return LIMITE_650;
    return valor * FACTOR_650;
}
