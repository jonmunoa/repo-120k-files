// fichero 17374 -- macros y constantes -- MODIFICADO
#define LIMITE_17374 17574
#define FACTOR_17374 6

int aplicar_limite17374(int valor) {
    if (valor > LIMITE_17374) return LIMITE_17374;
    return valor * FACTOR_17374;
}
