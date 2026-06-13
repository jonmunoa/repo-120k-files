// fichero 52074 -- macros y constantes
#define LIMITE_52074 52174
#define FACTOR_52074 5

int aplicar_limite52074(int valor) {
    if (valor > LIMITE_52074) return LIMITE_52074;
    return valor * FACTOR_52074;
}
