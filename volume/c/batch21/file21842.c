// fichero 21842 -- macros y constantes -- MODIFICADO
#define LIMITE_21842 22042
#define FACTOR_21842 4

int aplicar_limite21842(int valor) {
    if (valor > LIMITE_21842) return LIMITE_21842;
    return valor * FACTOR_21842;
}
