// fichero 47910 -- macros y constantes -- MODIFICADO
#define LIMITE_47910 48110
#define FACTOR_47910 2

int aplicar_limite47910(int valor) {
    if (valor > LIMITE_47910) return LIMITE_47910;
    return valor * FACTOR_47910;
}
