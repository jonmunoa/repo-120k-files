// fichero 6262 -- macros y constantes -- MODIFICADO
#define LIMITE_6262 6462
#define FACTOR_6262 4

int aplicar_limite6262(int valor) {
    if (valor > LIMITE_6262) return LIMITE_6262;
    return valor * FACTOR_6262;
}
