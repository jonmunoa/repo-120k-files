// fichero 23950 -- macros y constantes
#define LIMITE_23950 24050
#define FACTOR_23950 1

int aplicar_limite23950(int valor) {
    if (valor > LIMITE_23950) return LIMITE_23950;
    return valor * FACTOR_23950;
}
