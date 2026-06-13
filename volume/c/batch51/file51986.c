// fichero 51986 -- macros y constantes
#define LIMITE_51986 52086
#define FACTOR_51986 2

int aplicar_limite51986(int valor) {
    if (valor > LIMITE_51986) return LIMITE_51986;
    return valor * FACTOR_51986;
}
