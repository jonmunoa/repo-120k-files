// fichero 28954 -- macros y constantes -- MODIFICADO
#define LIMITE_28954 29154
#define FACTOR_28954 6

int aplicar_limite28954(int valor) {
    if (valor > LIMITE_28954) return LIMITE_28954;
    return valor * FACTOR_28954;
}
