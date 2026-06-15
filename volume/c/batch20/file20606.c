// fichero 20606 -- macros y constantes -- MODIFICADO
#define LIMITE_20606 20806
#define FACTOR_20606 3

int aplicar_limite20606(int valor) {
    if (valor > LIMITE_20606) return LIMITE_20606;
    return valor * FACTOR_20606;
}
