// fichero 14226 -- macros y constantes
#define LIMITE_14226 14326
#define FACTOR_14226 2

int aplicar_limite14226(int valor) {
    if (valor > LIMITE_14226) return LIMITE_14226;
    return valor * FACTOR_14226;
}
