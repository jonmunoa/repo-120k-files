// fichero 30950 -- macros y constantes
#define LIMITE_30950 31050
#define FACTOR_30950 1

int aplicar_limite30950(int valor) {
    if (valor > LIMITE_30950) return LIMITE_30950;
    return valor * FACTOR_30950;
}
