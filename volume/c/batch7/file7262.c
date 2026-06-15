// fichero 7262 -- macros y constantes -- MODIFICADO
#define LIMITE_7262 7462
#define FACTOR_7262 4

int aplicar_limite7262(int valor) {
    if (valor > LIMITE_7262) return LIMITE_7262;
    return valor * FACTOR_7262;
}
