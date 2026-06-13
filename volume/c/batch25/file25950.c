// fichero 25950 -- macros y constantes
#define LIMITE_25950 26050
#define FACTOR_25950 1

int aplicar_limite25950(int valor) {
    if (valor > LIMITE_25950) return LIMITE_25950;
    return valor * FACTOR_25950;
}
