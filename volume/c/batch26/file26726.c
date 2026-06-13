// fichero 26726 -- macros y constantes
#define LIMITE_26726 26826
#define FACTOR_26726 2

int aplicar_limite26726(int valor) {
    if (valor > LIMITE_26726) return LIMITE_26726;
    return valor * FACTOR_26726;
}
