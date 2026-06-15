// fichero 12802 -- macros y constantes -- MODIFICADO
#define LIMITE_12802 13002
#define FACTOR_12802 4

int aplicar_limite12802(int valor) {
    if (valor > LIMITE_12802) return LIMITE_12802;
    return valor * FACTOR_12802;
}
