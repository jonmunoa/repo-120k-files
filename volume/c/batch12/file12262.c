// fichero 12262 -- macros y constantes -- MODIFICADO
#define LIMITE_12262 12462
#define FACTOR_12262 4

int aplicar_limite12262(int valor) {
    if (valor > LIMITE_12262) return LIMITE_12262;
    return valor * FACTOR_12262;
}
