// fichero 30802 -- macros y constantes -- MODIFICADO
#define LIMITE_30802 31002
#define FACTOR_30802 4

int aplicar_limite30802(int valor) {
    if (valor > LIMITE_30802) return LIMITE_30802;
    return valor * FACTOR_30802;
}
