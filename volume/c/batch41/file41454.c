// fichero 41454 -- macros y constantes
#define LIMITE_41454 41554
#define FACTOR_41454 5

int aplicar_limite41454(int valor) {
    if (valor > LIMITE_41454) return LIMITE_41454;
    return valor * FACTOR_41454;
}
