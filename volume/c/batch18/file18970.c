// fichero 18970 -- macros y constantes
#define LIMITE_18970 19070
#define FACTOR_18970 1

int aplicar_limite18970(int valor) {
    if (valor > LIMITE_18970) return LIMITE_18970;
    return valor * FACTOR_18970;
}
