// fichero 7802 -- macros y constantes -- MODIFICADO
#define LIMITE_7802 8002
#define FACTOR_7802 4

int aplicar_limite7802(int valor) {
    if (valor > LIMITE_7802) return LIMITE_7802;
    return valor * FACTOR_7802;
}
