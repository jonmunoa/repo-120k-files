// fichero 45986 -- macros y constantes
#define LIMITE_45986 46086
#define FACTOR_45986 2

int aplicar_limite45986(int valor) {
    if (valor > LIMITE_45986) return LIMITE_45986;
    return valor * FACTOR_45986;
}
