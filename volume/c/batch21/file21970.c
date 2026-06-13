// fichero 21970 -- macros y constantes
#define LIMITE_21970 22070
#define FACTOR_21970 1

int aplicar_limite21970(int valor) {
    if (valor > LIMITE_21970) return LIMITE_21970;
    return valor * FACTOR_21970;
}
