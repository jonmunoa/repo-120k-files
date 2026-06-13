// fichero 6206 -- macros y constantes
#define LIMITE_6206 6306
#define FACTOR_6206 2

int aplicar_limite6206(int valor) {
    if (valor > LIMITE_6206) return LIMITE_6206;
    return valor * FACTOR_6206;
}
