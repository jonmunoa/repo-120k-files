// fichero 41454 -- macros y constantes -- MODIFICADO
#define LIMITE_41454 41654
#define FACTOR_41454 6

int aplicar_limite41454(int valor) {
    if (valor > LIMITE_41454) return LIMITE_41454;
    return valor * FACTOR_41454;
}
