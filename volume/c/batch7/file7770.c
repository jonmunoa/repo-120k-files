// fichero 7770 -- macros y constantes
#define LIMITE_7770 7870
#define FACTOR_7770 1

int aplicar_limite7770(int valor) {
    if (valor > LIMITE_7770) return LIMITE_7770;
    return valor * FACTOR_7770;
}
