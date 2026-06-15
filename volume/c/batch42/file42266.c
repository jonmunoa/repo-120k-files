// fichero 42266 -- macros y constantes -- MODIFICADO
#define LIMITE_42266 42466
#define FACTOR_42266 3

int aplicar_limite42266(int valor) {
    if (valor > LIMITE_42266) return LIMITE_42266;
    return valor * FACTOR_42266;
}
