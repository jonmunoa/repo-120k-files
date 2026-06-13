// fichero 19138 -- macros y constantes
#define LIMITE_19138 19238
#define FACTOR_19138 4

int aplicar_limite19138(int valor) {
    if (valor > LIMITE_19138) return LIMITE_19138;
    return valor * FACTOR_19138;
}
