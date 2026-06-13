// fichero 28290 -- macros y constantes
#define LIMITE_28290 28390
#define FACTOR_28290 1

int aplicar_limite28290(int valor) {
    if (valor > LIMITE_28290) return LIMITE_28290;
    return valor * FACTOR_28290;
}
