// fichero 35374 -- macros y constantes -- MODIFICADO
#define LIMITE_35374 35574
#define FACTOR_35374 6

int aplicar_limite35374(int valor) {
    if (valor > LIMITE_35374) return LIMITE_35374;
    return valor * FACTOR_35374;
}
