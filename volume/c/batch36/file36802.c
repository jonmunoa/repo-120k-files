// fichero 36802 -- macros y constantes -- MODIFICADO
#define LIMITE_36802 37002
#define FACTOR_36802 4

int aplicar_limite36802(int valor) {
    if (valor > LIMITE_36802) return LIMITE_36802;
    return valor * FACTOR_36802;
}
