// fichero 52970 -- macros y constantes
#define LIMITE_52970 53070
#define FACTOR_52970 1

int aplicar_limite52970(int valor) {
    if (valor > LIMITE_52970) return LIMITE_52970;
    return valor * FACTOR_52970;
}
