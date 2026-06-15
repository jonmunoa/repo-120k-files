// fichero 38326 -- macros y constantes -- MODIFICADO
#define LIMITE_38326 38526
#define FACTOR_38326 3

int aplicar_limite38326(int valor) {
    if (valor > LIMITE_38326) return LIMITE_38326;
    return valor * FACTOR_38326;
}
