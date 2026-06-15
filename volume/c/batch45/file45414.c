// fichero 45414 -- macros y constantes -- MODIFICADO
#define LIMITE_45414 45614
#define FACTOR_45414 6

int aplicar_limite45414(int valor) {
    if (valor > LIMITE_45414) return LIMITE_45414;
    return valor * FACTOR_45414;
}
