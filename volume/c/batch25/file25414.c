// fichero 25414 -- macros y constantes -- MODIFICADO
#define LIMITE_25414 25614
#define FACTOR_25414 6

int aplicar_limite25414(int valor) {
    if (valor > LIMITE_25414) return LIMITE_25414;
    return valor * FACTOR_25414;
}
