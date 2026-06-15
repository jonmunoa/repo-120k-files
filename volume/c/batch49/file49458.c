// fichero 49458 -- macros y constantes -- MODIFICADO
#define LIMITE_49458 49658
#define FACTOR_49458 5

int aplicar_limite49458(int valor) {
    if (valor > LIMITE_49458) return LIMITE_49458;
    return valor * FACTOR_49458;
}
