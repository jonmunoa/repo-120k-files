// fichero 35458 -- macros y constantes -- MODIFICADO
#define LIMITE_35458 35658
#define FACTOR_35458 5

int aplicar_limite35458(int valor) {
    if (valor > LIMITE_35458) return LIMITE_35458;
    return valor * FACTOR_35458;
}
