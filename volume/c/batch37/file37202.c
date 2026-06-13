// fichero 37202 -- macros y constantes
#define LIMITE_37202 37302
#define FACTOR_37202 3

int aplicar_limite37202(int valor) {
    if (valor > LIMITE_37202) return LIMITE_37202;
    return valor * FACTOR_37202;
}
