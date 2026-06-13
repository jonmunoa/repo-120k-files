// fichero 37146 -- macros y constantes
#define LIMITE_37146 37246
#define FACTOR_37146 2

int aplicar_limite37146(int valor) {
    if (valor > LIMITE_37146) return LIMITE_37146;
    return valor * FACTOR_37146;
}
