// fichero 52102 -- macros y constantes
#define LIMITE_52102 52202
#define FACTOR_52102 3

int aplicar_limite52102(int valor) {
    if (valor > LIMITE_52102) return LIMITE_52102;
    return valor * FACTOR_52102;
}
