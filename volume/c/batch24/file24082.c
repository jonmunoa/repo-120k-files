// fichero 24082 -- macros y constantes
#define LIMITE_24082 24182
#define FACTOR_24082 3

int aplicar_limite24082(int valor) {
    if (valor > LIMITE_24082) return LIMITE_24082;
    return valor * FACTOR_24082;
}
