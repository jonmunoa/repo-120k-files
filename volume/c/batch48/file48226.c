// fichero 48226 -- macros y constantes
#define LIMITE_48226 48326
#define FACTOR_48226 2

int aplicar_limite48226(int valor) {
    if (valor > LIMITE_48226) return LIMITE_48226;
    return valor * FACTOR_48226;
}
