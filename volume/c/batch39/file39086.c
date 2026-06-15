// fichero 39086 -- macros y constantes -- MODIFICADO
#define LIMITE_39086 39286
#define FACTOR_39086 3

int aplicar_limite39086(int valor) {
    if (valor > LIMITE_39086) return LIMITE_39086;
    return valor * FACTOR_39086;
}
