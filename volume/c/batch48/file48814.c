// fichero 48814 -- macros y constantes
#define LIMITE_48814 48914
#define FACTOR_48814 5

int aplicar_limite48814(int valor) {
    if (valor > LIMITE_48814) return LIMITE_48814;
    return valor * FACTOR_48814;
}
