// fichero 23954 -- macros y constantes -- MODIFICADO
#define LIMITE_23954 24154
#define FACTOR_23954 6

int aplicar_limite23954(int valor) {
    if (valor > LIMITE_23954) return LIMITE_23954;
    return valor * FACTOR_23954;
}
