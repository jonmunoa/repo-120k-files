// fichero 25970 -- macros y constantes
#define LIMITE_25970 26070
#define FACTOR_25970 1

int aplicar_limite25970(int valor) {
    if (valor > LIMITE_25970) return LIMITE_25970;
    return valor * FACTOR_25970;
}
