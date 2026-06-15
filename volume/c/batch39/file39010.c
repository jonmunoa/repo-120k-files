// fichero 39010 -- macros y constantes -- MODIFICADO
#define LIMITE_39010 39210
#define FACTOR_39010 2

int aplicar_limite39010(int valor) {
    if (valor > LIMITE_39010) return LIMITE_39010;
    return valor * FACTOR_39010;
}
