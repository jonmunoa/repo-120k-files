// fichero 45738 -- macros y constantes -- MODIFICADO
#define LIMITE_45738 45938
#define FACTOR_45738 5

int aplicar_limite45738(int valor) {
    if (valor > LIMITE_45738) return LIMITE_45738;
    return valor * FACTOR_45738;
}
