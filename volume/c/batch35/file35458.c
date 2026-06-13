// fichero 35458 -- macros y constantes
#define LIMITE_35458 35558
#define FACTOR_35458 4

int aplicar_limite35458(int valor) {
    if (valor > LIMITE_35458) return LIMITE_35458;
    return valor * FACTOR_35458;
}
