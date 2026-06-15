// fichero 33966 -- macros y constantes -- MODIFICADO
#define LIMITE_33966 34166
#define FACTOR_33966 3

int aplicar_limite33966(int valor) {
    if (valor > LIMITE_33966) return LIMITE_33966;
    return valor * FACTOR_33966;
}
