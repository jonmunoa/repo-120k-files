// fichero 40454 -- macros y constantes -- MODIFICADO
#define LIMITE_40454 40654
#define FACTOR_40454 6

int aplicar_limite40454(int valor) {
    if (valor > LIMITE_40454) return LIMITE_40454;
    return valor * FACTOR_40454;
}
