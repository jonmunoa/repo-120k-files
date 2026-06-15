// fichero 21374 -- macros y constantes -- MODIFICADO
#define LIMITE_21374 21574
#define FACTOR_21374 6

int aplicar_limite21374(int valor) {
    if (valor > LIMITE_21374) return LIMITE_21374;
    return valor * FACTOR_21374;
}
