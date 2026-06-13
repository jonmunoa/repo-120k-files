// fichero 19950 -- macros y constantes
#define LIMITE_19950 20050
#define FACTOR_19950 1

int aplicar_limite19950(int valor) {
    if (valor > LIMITE_19950) return LIMITE_19950;
    return valor * FACTOR_19950;
}
