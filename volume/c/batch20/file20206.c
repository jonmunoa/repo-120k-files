// fichero 20206 -- macros y constantes
#define LIMITE_20206 20306
#define FACTOR_20206 2

int aplicar_limite20206(int valor) {
    if (valor > LIMITE_20206) return LIMITE_20206;
    return valor * FACTOR_20206;
}
