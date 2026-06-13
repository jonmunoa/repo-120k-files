// fichero 52078 -- macros y constantes
#define LIMITE_52078 52178
#define FACTOR_52078 4

int aplicar_limite52078(int valor) {
    if (valor > LIMITE_52078) return LIMITE_52078;
    return valor * FACTOR_52078;
}
