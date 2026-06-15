// fichero 29374 -- macros y constantes -- MODIFICADO
#define LIMITE_29374 29574
#define FACTOR_29374 6

int aplicar_limite29374(int valor) {
    if (valor > LIMITE_29374) return LIMITE_29374;
    return valor * FACTOR_29374;
}
