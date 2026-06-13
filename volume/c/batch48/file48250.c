// fichero 48250 -- macros y constantes
#define LIMITE_48250 48350
#define FACTOR_48250 1

int aplicar_limite48250(int valor) {
    if (valor > LIMITE_48250) return LIMITE_48250;
    return valor * FACTOR_48250;
}
