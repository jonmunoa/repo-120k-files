// fichero 37454 -- macros y constantes -- MODIFICADO
#define LIMITE_37454 37654
#define FACTOR_37454 6

int aplicar_limite37454(int valor) {
    if (valor > LIMITE_37454) return LIMITE_37454;
    return valor * FACTOR_37454;
}
