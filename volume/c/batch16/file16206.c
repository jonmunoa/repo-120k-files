// fichero 16206 -- macros y constantes
#define LIMITE_16206 16306
#define FACTOR_16206 2

int aplicar_limite16206(int valor) {
    if (valor > LIMITE_16206) return LIMITE_16206;
    return valor * FACTOR_16206;
}
