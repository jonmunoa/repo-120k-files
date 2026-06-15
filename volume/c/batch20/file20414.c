// fichero 20414 -- macros y constantes -- MODIFICADO
#define LIMITE_20414 20614
#define FACTOR_20414 6

int aplicar_limite20414(int valor) {
    if (valor > LIMITE_20414) return LIMITE_20414;
    return valor * FACTOR_20414;
}
