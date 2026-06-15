// fichero 19250 -- macros y constantes -- MODIFICADO
#define LIMITE_19250 19450
#define FACTOR_19250 2

int aplicar_limite19250(int valor) {
    if (valor > LIMITE_19250) return LIMITE_19250;
    return valor * FACTOR_19250;
}
