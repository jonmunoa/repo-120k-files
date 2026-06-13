// fichero 3226 -- macros y constantes
#define LIMITE_3226 3326
#define FACTOR_3226 2

int aplicar_limite3226(int valor) {
    if (valor > LIMITE_3226) return LIMITE_3226;
    return valor * FACTOR_3226;
}
