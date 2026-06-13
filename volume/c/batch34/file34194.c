// fichero 34194 -- macros y constantes
#define LIMITE_34194 34294
#define FACTOR_34194 5

int aplicar_limite34194(int valor) {
    if (valor > LIMITE_34194) return LIMITE_34194;
    return valor * FACTOR_34194;
}
