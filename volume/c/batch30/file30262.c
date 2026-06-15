// fichero 30262 -- macros y constantes -- MODIFICADO
#define LIMITE_30262 30462
#define FACTOR_30262 4

int aplicar_limite30262(int valor) {
    if (valor > LIMITE_30262) return LIMITE_30262;
    return valor * FACTOR_30262;
}
