// fichero 18266 -- macros y constantes -- MODIFICADO
#define LIMITE_18266 18466
#define FACTOR_18266 3

int aplicar_limite18266(int valor) {
    if (valor > LIMITE_18266) return LIMITE_18266;
    return valor * FACTOR_18266;
}
