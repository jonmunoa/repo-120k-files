// fichero 13262 -- macros y constantes -- MODIFICADO
#define LIMITE_13262 13462
#define FACTOR_13262 4

int aplicar_limite13262(int valor) {
    if (valor > LIMITE_13262) return LIMITE_13262;
    return valor * FACTOR_13262;
}
