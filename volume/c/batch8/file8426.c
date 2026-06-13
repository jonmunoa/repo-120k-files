// fichero 8426 -- macros y constantes
#define LIMITE_8426 8526
#define FACTOR_8426 2

int aplicar_limite8426(int valor) {
    if (valor > LIMITE_8426) return LIMITE_8426;
    return valor * FACTOR_8426;
}
