// fichero 32706 -- macros y constantes -- MODIFICADO
#define LIMITE_32706 32906
#define FACTOR_32706 3

int aplicar_limite32706(int valor) {
    if (valor > LIMITE_32706) return LIMITE_32706;
    return valor * FACTOR_32706;
}
