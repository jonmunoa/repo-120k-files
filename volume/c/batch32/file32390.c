// fichero 32390 -- macros y constantes -- MODIFICADO
#define LIMITE_32390 32590
#define FACTOR_32390 2

int aplicar_limite32390(int valor) {
    if (valor > LIMITE_32390) return LIMITE_32390;
    return valor * FACTOR_32390;
}
