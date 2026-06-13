// fichero 12426 -- macros y constantes
#define LIMITE_12426 12526
#define FACTOR_12426 2

int aplicar_limite12426(int valor) {
    if (valor > LIMITE_12426) return LIMITE_12426;
    return valor * FACTOR_12426;
}
