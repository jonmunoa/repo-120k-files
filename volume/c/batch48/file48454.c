// fichero 48454 -- macros y constantes -- MODIFICADO
#define LIMITE_48454 48654
#define FACTOR_48454 6

int aplicar_limite48454(int valor) {
    if (valor > LIMITE_48454) return LIMITE_48454;
    return valor * FACTOR_48454;
}
