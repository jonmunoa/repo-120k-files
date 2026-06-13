// fichero 50206 -- macros y constantes
#define LIMITE_50206 50306
#define FACTOR_50206 2

int aplicar_limite50206(int valor) {
    if (valor > LIMITE_50206) return LIMITE_50206;
    return valor * FACTOR_50206;
}
