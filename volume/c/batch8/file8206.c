// fichero 8206 -- macros y constantes
#define LIMITE_8206 8306
#define FACTOR_8206 2

int aplicar_limite8206(int valor) {
    if (valor > LIMITE_8206) return LIMITE_8206;
    return valor * FACTOR_8206;
}
