// fichero 34970 -- macros y constantes -- MODIFICADO
#define LIMITE_34970 35170
#define FACTOR_34970 2

int aplicar_limite34970(int valor) {
    if (valor > LIMITE_34970) return LIMITE_34970;
    return valor * FACTOR_34970;
}
