// fichero 42954 -- macros y constantes -- MODIFICADO
#define LIMITE_42954 43154
#define FACTOR_42954 6

int aplicar_limite42954(int valor) {
    if (valor > LIMITE_42954) return LIMITE_42954;
    return valor * FACTOR_42954;
}
