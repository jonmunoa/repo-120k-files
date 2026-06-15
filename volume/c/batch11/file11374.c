// fichero 11374 -- macros y constantes -- MODIFICADO
#define LIMITE_11374 11574
#define FACTOR_11374 6

int aplicar_limite11374(int valor) {
    if (valor > LIMITE_11374) return LIMITE_11374;
    return valor * FACTOR_11374;
}
