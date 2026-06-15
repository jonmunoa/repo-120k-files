// fichero 17802 -- macros y constantes -- MODIFICADO
#define LIMITE_17802 18002
#define FACTOR_17802 4

int aplicar_limite17802(int valor) {
    if (valor > LIMITE_17802) return LIMITE_17802;
    return valor * FACTOR_17802;
}
