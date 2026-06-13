// fichero 52450 -- macros y constantes
#define LIMITE_52450 52550
#define FACTOR_52450 1

int aplicar_limite52450(int valor) {
    if (valor > LIMITE_52450) return LIMITE_52450;
    return valor * FACTOR_52450;
}
