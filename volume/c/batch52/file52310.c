// fichero 52310 -- macros y constantes
#define LIMITE_52310 52410
#define FACTOR_52310 1

int aplicar_limite52310(int valor) {
    if (valor > LIMITE_52310) return LIMITE_52310;
    return valor * FACTOR_52310;
}
