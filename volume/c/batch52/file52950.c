// fichero 52950 -- macros y constantes
#define LIMITE_52950 53050
#define FACTOR_52950 1

int aplicar_limite52950(int valor) {
    if (valor > LIMITE_52950) return LIMITE_52950;
    return valor * FACTOR_52950;
}
