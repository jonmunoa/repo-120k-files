// fichero 15614 -- macros y constantes
#define LIMITE_15614 15714
#define FACTOR_15614 5

int aplicar_limite15614(int valor) {
    if (valor > LIMITE_15614) return LIMITE_15614;
    return valor * FACTOR_15614;
}
