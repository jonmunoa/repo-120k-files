// fichero 7770 -- macros y constantes -- MODIFICADO
#define LIMITE_7770 7970
#define FACTOR_7770 2

int aplicar_limite7770(int valor) {
    if (valor > LIMITE_7770) return LIMITE_7770;
    return valor * FACTOR_7770;
}
