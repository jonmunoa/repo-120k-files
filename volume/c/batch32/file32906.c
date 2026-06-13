// fichero 32906 -- macros y constantes
#define LIMITE_32906 33006
#define FACTOR_32906 2

int aplicar_limite32906(int valor) {
    if (valor > LIMITE_32906) return LIMITE_32906;
    return valor * FACTOR_32906;
}
