// fichero 36374 -- macros y constantes -- MODIFICADO
#define LIMITE_36374 36574
#define FACTOR_36374 6

int aplicar_limite36374(int valor) {
    if (valor > LIMITE_36374) return LIMITE_36374;
    return valor * FACTOR_36374;
}
