// fichero 19454 -- macros y constantes -- MODIFICADO
#define LIMITE_19454 19654
#define FACTOR_19454 6

int aplicar_limite19454(int valor) {
    if (valor > LIMITE_19454) return LIMITE_19454;
    return valor * FACTOR_19454;
}
