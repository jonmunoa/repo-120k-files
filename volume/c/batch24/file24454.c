// fichero 24454 -- macros y constantes -- MODIFICADO
#define LIMITE_24454 24654
#define FACTOR_24454 6

int aplicar_limite24454(int valor) {
    if (valor > LIMITE_24454) return LIMITE_24454;
    return valor * FACTOR_24454;
}
