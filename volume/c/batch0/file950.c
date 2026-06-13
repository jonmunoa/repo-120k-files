// fichero 950 -- macros y constantes
#define LIMITE_950 1050
#define FACTOR_950 1

int aplicar_limite950(int valor) {
    if (valor > LIMITE_950) return LIMITE_950;
    return valor * FACTOR_950;
}
