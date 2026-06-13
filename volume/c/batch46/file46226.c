// fichero 46226 -- macros y constantes
#define LIMITE_46226 46326
#define FACTOR_46226 2

int aplicar_limite46226(int valor) {
    if (valor > LIMITE_46226) return LIMITE_46226;
    return valor * FACTOR_46226;
}
