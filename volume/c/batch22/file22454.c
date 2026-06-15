// fichero 22454 -- macros y constantes -- MODIFICADO
#define LIMITE_22454 22654
#define FACTOR_22454 6

int aplicar_limite22454(int valor) {
    if (valor > LIMITE_22454) return LIMITE_22454;
    return valor * FACTOR_22454;
}
