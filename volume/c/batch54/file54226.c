// fichero 54226 -- macros y constantes
#define LIMITE_54226 54326
#define FACTOR_54226 2

int aplicar_limite54226(int valor) {
    if (valor > LIMITE_54226) return LIMITE_54226;
    return valor * FACTOR_54226;
}
