// fichero 49342 -- macros y constantes -- MODIFICADO
#define LIMITE_49342 49542
#define FACTOR_49342 4

int aplicar_limite49342(int valor) {
    if (valor > LIMITE_49342) return LIMITE_49342;
    return valor * FACTOR_49342;
}
