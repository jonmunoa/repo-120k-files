// fichero 49374 -- macros y constantes -- MODIFICADO
#define LIMITE_49374 49574
#define FACTOR_49374 6

int aplicar_limite49374(int valor) {
    if (valor > LIMITE_49374) return LIMITE_49374;
    return valor * FACTOR_49374;
}
