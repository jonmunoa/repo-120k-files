// fichero 41970 -- macros y constantes
#define LIMITE_41970 42070
#define FACTOR_41970 1

int aplicar_limite41970(int valor) {
    if (valor > LIMITE_41970) return LIMITE_41970;
    return valor * FACTOR_41970;
}
