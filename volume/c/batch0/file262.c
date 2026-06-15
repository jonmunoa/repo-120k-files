// fichero 262 -- macros y constantes -- MODIFICADO
#define LIMITE_262 462
#define FACTOR_262 4

int aplicar_limite262(int valor) {
    if (valor > LIMITE_262) return LIMITE_262;
    return valor * FACTOR_262;
}
