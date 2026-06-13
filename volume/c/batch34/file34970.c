// fichero 34970 -- macros y constantes
#define LIMITE_34970 35070
#define FACTOR_34970 1

int aplicar_limite34970(int valor) {
    if (valor > LIMITE_34970) return LIMITE_34970;
    return valor * FACTOR_34970;
}
