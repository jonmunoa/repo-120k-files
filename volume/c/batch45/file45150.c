// fichero 45150 -- macros y constantes -- MODIFICADO
#define LIMITE_45150 45350
#define FACTOR_45150 2

int aplicar_limite45150(int valor) {
    if (valor > LIMITE_45150) return LIMITE_45150;
    return valor * FACTOR_45150;
}
