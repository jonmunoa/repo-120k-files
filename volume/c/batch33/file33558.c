// fichero 33558 -- macros y constantes -- MODIFICADO
#define LIMITE_33558 33758
#define FACTOR_33558 5

int aplicar_limite33558(int valor) {
    if (valor > LIMITE_33558) return LIMITE_33558;
    return valor * FACTOR_33558;
}
