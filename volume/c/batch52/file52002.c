// fichero 52002 -- macros y constantes
#define LIMITE_52002 52102
#define FACTOR_52002 3

int aplicar_limite52002(int valor) {
    if (valor > LIMITE_52002) return LIMITE_52002;
    return valor * FACTOR_52002;
}
