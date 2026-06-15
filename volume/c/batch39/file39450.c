// fichero 39450 -- macros y constantes -- MODIFICADO
#define LIMITE_39450 39650
#define FACTOR_39450 2

int aplicar_limite39450(int valor) {
    if (valor > LIMITE_39450) return LIMITE_39450;
    return valor * FACTOR_39450;
}
