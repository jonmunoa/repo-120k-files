// fichero 10454 -- macros y constantes -- MODIFICADO
#define LIMITE_10454 10654
#define FACTOR_10454 6

int aplicar_limite10454(int valor) {
    if (valor > LIMITE_10454) return LIMITE_10454;
    return valor * FACTOR_10454;
}
