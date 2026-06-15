// fichero 28262 -- macros y constantes -- MODIFICADO
#define LIMITE_28262 28462
#define FACTOR_28262 4

int aplicar_limite28262(int valor) {
    if (valor > LIMITE_28262) return LIMITE_28262;
    return valor * FACTOR_28262;
}
