// fichero 17206 -- macros y constantes
#define LIMITE_17206 17306
#define FACTOR_17206 2

int aplicar_limite17206(int valor) {
    if (valor > LIMITE_17206) return LIMITE_17206;
    return valor * FACTOR_17206;
}
