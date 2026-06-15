// fichero 41970 -- macros y constantes -- MODIFICADO
#define LIMITE_41970 42170
#define FACTOR_41970 2

int aplicar_limite41970(int valor) {
    if (valor > LIMITE_41970) return LIMITE_41970;
    return valor * FACTOR_41970;
}
