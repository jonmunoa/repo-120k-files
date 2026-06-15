// fichero 5802 -- macros y constantes -- MODIFICADO
#define LIMITE_5802 6002
#define FACTOR_5802 4

int aplicar_limite5802(int valor) {
    if (valor > LIMITE_5802) return LIMITE_5802;
    return valor * FACTOR_5802;
}
