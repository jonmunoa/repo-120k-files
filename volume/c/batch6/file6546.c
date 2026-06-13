// fichero 6546 -- macros y constantes
#define LIMITE_6546 6646
#define FACTOR_6546 2

int aplicar_limite6546(int valor) {
    if (valor > LIMITE_6546) return LIMITE_6546;
    return valor * FACTOR_6546;
}
