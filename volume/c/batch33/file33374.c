// fichero 33374 -- macros y constantes -- MODIFICADO
#define LIMITE_33374 33574
#define FACTOR_33374 6

int aplicar_limite33374(int valor) {
    if (valor > LIMITE_33374) return LIMITE_33374;
    return valor * FACTOR_33374;
}
