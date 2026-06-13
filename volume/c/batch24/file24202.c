// fichero 24202 -- macros y constantes
#define LIMITE_24202 24302
#define FACTOR_24202 3

int aplicar_limite24202(int valor) {
    if (valor > LIMITE_24202) return LIMITE_24202;
    return valor * FACTOR_24202;
}
