// fichero 16262 -- macros y constantes -- MODIFICADO
#define LIMITE_16262 16462
#define FACTOR_16262 4

int aplicar_limite16262(int valor) {
    if (valor > LIMITE_16262) return LIMITE_16262;
    return valor * FACTOR_16262;
}
