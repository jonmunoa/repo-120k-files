// fichero 32262 -- macros y constantes -- MODIFICADO
#define LIMITE_32262 32462
#define FACTOR_32262 4

int aplicar_limite32262(int valor) {
    if (valor > LIMITE_32262) return LIMITE_32262;
    return valor * FACTOR_32262;
}
