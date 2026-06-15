// fichero 15802 -- macros y constantes -- MODIFICADO
#define LIMITE_15802 16002
#define FACTOR_15802 4

int aplicar_limite15802(int valor) {
    if (valor > LIMITE_15802) return LIMITE_15802;
    return valor * FACTOR_15802;
}
