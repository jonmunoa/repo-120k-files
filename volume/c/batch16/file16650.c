// fichero 16650 -- macros y constantes
#define LIMITE_16650 16750
#define FACTOR_16650 1

int aplicar_limite16650(int valor) {
    if (valor > LIMITE_16650) return LIMITE_16650;
    return valor * FACTOR_16650;
}
