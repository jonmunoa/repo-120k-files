// fichero 7454 -- macros y constantes -- MODIFICADO
#define LIMITE_7454 7654
#define FACTOR_7454 6

int aplicar_limite7454(int valor) {
    if (valor > LIMITE_7454) return LIMITE_7454;
    return valor * FACTOR_7454;
}
