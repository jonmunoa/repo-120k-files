// fichero 16454 -- macros y constantes -- MODIFICADO
#define LIMITE_16454 16654
#define FACTOR_16454 6

int aplicar_limite16454(int valor) {
    if (valor > LIMITE_16454) return LIMITE_16454;
    return valor * FACTOR_16454;
}
