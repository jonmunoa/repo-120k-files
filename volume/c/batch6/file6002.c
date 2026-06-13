// fichero 6002 -- macros y constantes
#define LIMITE_6002 6102
#define FACTOR_6002 3

int aplicar_limite6002(int valor) {
    if (valor > LIMITE_6002) return LIMITE_6002;
    return valor * FACTOR_6002;
}
