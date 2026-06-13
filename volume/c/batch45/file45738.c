// fichero 45738 -- macros y constantes
#define LIMITE_45738 45838
#define FACTOR_45738 4

int aplicar_limite45738(int valor) {
    if (valor > LIMITE_45738) return LIMITE_45738;
    return valor * FACTOR_45738;
}
