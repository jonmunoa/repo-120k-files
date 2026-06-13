// fichero 12442 -- macros y constantes
#define LIMITE_12442 12542
#define FACTOR_12442 3

int aplicar_limite12442(int valor) {
    if (valor > LIMITE_12442) return LIMITE_12442;
    return valor * FACTOR_12442;
}
