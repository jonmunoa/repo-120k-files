// fichero 48450 -- macros y constantes
#define LIMITE_48450 48550
#define FACTOR_48450 1

int aplicar_limite48450(int valor) {
    if (valor > LIMITE_48450) return LIMITE_48450;
    return valor * FACTOR_48450;
}
