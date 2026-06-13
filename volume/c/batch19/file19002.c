// fichero 19002 -- macros y constantes
#define LIMITE_19002 19102
#define FACTOR_19002 3

int aplicar_limite19002(int valor) {
    if (valor > LIMITE_19002) return LIMITE_19002;
    return valor * FACTOR_19002;
}
