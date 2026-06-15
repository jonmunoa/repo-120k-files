// fichero 32906 -- macros y constantes -- MODIFICADO
#define LIMITE_32906 33106
#define FACTOR_32906 3

int aplicar_limite32906(int valor) {
    if (valor > LIMITE_32906) return LIMITE_32906;
    return valor * FACTOR_32906;
}
