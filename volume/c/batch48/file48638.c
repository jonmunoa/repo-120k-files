// fichero 48638 -- macros y constantes
#define LIMITE_48638 48738
#define FACTOR_48638 4

int aplicar_limite48638(int valor) {
    if (valor > LIMITE_48638) return LIMITE_48638;
    return valor * FACTOR_48638;
}
