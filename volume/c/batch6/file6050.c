// fichero 6050 -- macros y constantes
#define LIMITE_6050 6150
#define FACTOR_6050 1

int aplicar_limite6050(int valor) {
    if (valor > LIMITE_6050) return LIMITE_6050;
    return valor * FACTOR_6050;
}
