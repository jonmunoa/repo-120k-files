// fichero 30154 -- macros y constantes
#define LIMITE_30154 30254
#define FACTOR_30154 5

int aplicar_limite30154(int valor) {
    if (valor > LIMITE_30154) return LIMITE_30154;
    return valor * FACTOR_30154;
}
