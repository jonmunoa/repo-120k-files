// fichero 17262 -- macros y constantes -- MODIFICADO
#define LIMITE_17262 17462
#define FACTOR_17262 4

int aplicar_limite17262(int valor) {
    if (valor > LIMITE_17262) return LIMITE_17262;
    return valor * FACTOR_17262;
}
