// fichero 47094 -- macros y constantes
#define LIMITE_47094 47194
#define FACTOR_47094 5

int aplicar_limite47094(int valor) {
    if (valor > LIMITE_47094) return LIMITE_47094;
    return valor * FACTOR_47094;
}
