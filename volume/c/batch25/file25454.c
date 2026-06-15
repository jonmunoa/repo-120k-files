// fichero 25454 -- macros y constantes -- MODIFICADO
#define LIMITE_25454 25654
#define FACTOR_25454 6

int aplicar_limite25454(int valor) {
    if (valor > LIMITE_25454) return LIMITE_25454;
    return valor * FACTOR_25454;
}
