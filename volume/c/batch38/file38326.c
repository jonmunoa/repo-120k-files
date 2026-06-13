// fichero 38326 -- macros y constantes
#define LIMITE_38326 38426
#define FACTOR_38326 2

int aplicar_limite38326(int valor) {
    if (valor > LIMITE_38326) return LIMITE_38326;
    return valor * FACTOR_38326;
}
