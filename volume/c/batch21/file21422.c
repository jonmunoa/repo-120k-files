// fichero 21422 -- macros y constantes -- MODIFICADO
#define LIMITE_21422 21622
#define FACTOR_21422 4

int aplicar_limite21422(int valor) {
    if (valor > LIMITE_21422) return LIMITE_21422;
    return valor * FACTOR_21422;
}
