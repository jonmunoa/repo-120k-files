// fichero 13802 -- macros y constantes -- MODIFICADO
#define LIMITE_13802 14002
#define FACTOR_13802 4

int aplicar_limite13802(int valor) {
    if (valor > LIMITE_13802) return LIMITE_13802;
    return valor * FACTOR_13802;
}
