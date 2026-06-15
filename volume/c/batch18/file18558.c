// fichero 18558 -- macros y constantes -- MODIFICADO
#define LIMITE_18558 18758
#define FACTOR_18558 5

int aplicar_limite18558(int valor) {
    if (valor > LIMITE_18558) return LIMITE_18558;
    return valor * FACTOR_18558;
}
