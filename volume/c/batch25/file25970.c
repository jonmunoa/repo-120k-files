// fichero 25970 -- macros y constantes -- MODIFICADO
#define LIMITE_25970 26170
#define FACTOR_25970 2

int aplicar_limite25970(int valor) {
    if (valor > LIMITE_25970) return LIMITE_25970;
    return valor * FACTOR_25970;
}
