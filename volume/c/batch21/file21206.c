// fichero 21206 -- macros y constantes
#define LIMITE_21206 21306
#define FACTOR_21206 2

int aplicar_limite21206(int valor) {
    if (valor > LIMITE_21206) return LIMITE_21206;
    return valor * FACTOR_21206;
}
