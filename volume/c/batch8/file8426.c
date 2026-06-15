// fichero 8426 -- macros y constantes -- MODIFICADO
#define LIMITE_8426 8626
#define FACTOR_8426 3

int aplicar_limite8426(int valor) {
    if (valor > LIMITE_8426) return LIMITE_8426;
    return valor * FACTOR_8426;
}
