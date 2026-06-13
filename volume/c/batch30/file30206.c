// fichero 30206 -- macros y constantes
#define LIMITE_30206 30306
#define FACTOR_30206 2

int aplicar_limite30206(int valor) {
    if (valor > LIMITE_30206) return LIMITE_30206;
    return valor * FACTOR_30206;
}
