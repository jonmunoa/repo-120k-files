// fichero 32374 -- macros y constantes -- MODIFICADO
#define LIMITE_32374 32574
#define FACTOR_32374 6

int aplicar_limite32374(int valor) {
    if (valor > LIMITE_32374) return LIMITE_32374;
    return valor * FACTOR_32374;
}
