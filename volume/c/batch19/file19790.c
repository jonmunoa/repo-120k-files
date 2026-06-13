// fichero 19790 -- macros y constantes
#define LIMITE_19790 19890
#define FACTOR_19790 1

int aplicar_limite19790(int valor) {
    if (valor > LIMITE_19790) return LIMITE_19790;
    return valor * FACTOR_19790;
}
