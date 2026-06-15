// fichero 47194 -- macros y constantes -- MODIFICADO
#define LIMITE_47194 47394
#define FACTOR_47194 6

int aplicar_limite47194(int valor) {
    if (valor > LIMITE_47194) return LIMITE_47194;
    return valor * FACTOR_47194;
}
