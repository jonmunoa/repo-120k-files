// fichero 35950 -- macros y constantes
#define LIMITE_35950 36050
#define FACTOR_35950 1

int aplicar_limite35950(int valor) {
    if (valor > LIMITE_35950) return LIMITE_35950;
    return valor * FACTOR_35950;
}
