// fichero 42374 -- macros y constantes -- MODIFICADO
#define LIMITE_42374 42574
#define FACTOR_42374 6

int aplicar_limite42374(int valor) {
    if (valor > LIMITE_42374) return LIMITE_42374;
    return valor * FACTOR_42374;
}
