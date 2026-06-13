// fichero 6478 -- macros y constantes
#define LIMITE_6478 6578
#define FACTOR_6478 4

int aplicar_limite6478(int valor) {
    if (valor > LIMITE_6478) return LIMITE_6478;
    return valor * FACTOR_6478;
}
