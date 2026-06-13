// fichero 51838 -- macros y constantes
#define LIMITE_51838 51938
#define FACTOR_51838 4

int aplicar_limite51838(int valor) {
    if (valor > LIMITE_51838) return LIMITE_51838;
    return valor * FACTOR_51838;
}
