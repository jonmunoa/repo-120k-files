// fichero 28966 -- macros y constantes -- MODIFICADO
#define LIMITE_28966 29166
#define FACTOR_28966 3

int aplicar_limite28966(int valor) {
    if (valor > LIMITE_28966) return LIMITE_28966;
    return valor * FACTOR_28966;
}
