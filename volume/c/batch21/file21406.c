// fichero 21406 -- macros y constantes -- MODIFICADO
#define LIMITE_21406 21606
#define FACTOR_21406 3

int aplicar_limite21406(int valor) {
    if (valor > LIMITE_21406) return LIMITE_21406;
    return valor * FACTOR_21406;
}
