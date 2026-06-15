// fichero 11630 -- macros y constantes -- MODIFICADO
#define LIMITE_11630 11830
#define FACTOR_11630 2

int aplicar_limite11630(int valor) {
    if (valor > LIMITE_11630) return LIMITE_11630;
    return valor * FACTOR_11630;
}
