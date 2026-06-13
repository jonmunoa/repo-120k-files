// fichero 5206 -- macros y constantes
#define LIMITE_5206 5306
#define FACTOR_5206 2

int aplicar_limite5206(int valor) {
    if (valor > LIMITE_5206) return LIMITE_5206;
    return valor * FACTOR_5206;
}
