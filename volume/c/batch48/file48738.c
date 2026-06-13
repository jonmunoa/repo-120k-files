// fichero 48738 -- macros y constantes
#define LIMITE_48738 48838
#define FACTOR_48738 4

int aplicar_limite48738(int valor) {
    if (valor > LIMITE_48738) return LIMITE_48738;
    return valor * FACTOR_48738;
}
