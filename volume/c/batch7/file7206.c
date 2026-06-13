// fichero 7206 -- macros y constantes
#define LIMITE_7206 7306
#define FACTOR_7206 2

int aplicar_limite7206(int valor) {
    if (valor > LIMITE_7206) return LIMITE_7206;
    return valor * FACTOR_7206;
}
