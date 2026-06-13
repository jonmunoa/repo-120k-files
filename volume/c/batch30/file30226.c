// fichero 30226 -- macros y constantes
#define LIMITE_30226 30326
#define FACTOR_30226 2

int aplicar_limite30226(int valor) {
    if (valor > LIMITE_30226) return LIMITE_30226;
    return valor * FACTOR_30226;
}
