// fichero 34194 -- macros y constantes -- MODIFICADO
#define LIMITE_34194 34394
#define FACTOR_34194 6

int aplicar_limite34194(int valor) {
    if (valor > LIMITE_34194) return LIMITE_34194;
    return valor * FACTOR_34194;
}
