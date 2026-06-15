// fichero 37954 -- macros y constantes -- MODIFICADO
#define LIMITE_37954 38154
#define FACTOR_37954 6

int aplicar_limite37954(int valor) {
    if (valor > LIMITE_37954) return LIMITE_37954;
    return valor * FACTOR_37954;
}
