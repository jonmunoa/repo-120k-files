// fichero 38262 -- macros y constantes -- MODIFICADO
#define LIMITE_38262 38462
#define FACTOR_38262 4

int aplicar_limite38262(int valor) {
    if (valor > LIMITE_38262) return LIMITE_38262;
    return valor * FACTOR_38262;
}
