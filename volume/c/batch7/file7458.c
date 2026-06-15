// fichero 7458 -- macros y constantes -- MODIFICADO
#define LIMITE_7458 7658
#define FACTOR_7458 5

int aplicar_limite7458(int valor) {
    if (valor > LIMITE_7458) return LIMITE_7458;
    return valor * FACTOR_7458;
}
