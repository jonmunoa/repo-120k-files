// fichero 31342 -- macros y constantes -- MODIFICADO
#define LIMITE_31342 31542
#define FACTOR_31342 4

int aplicar_limite31342(int valor) {
    if (valor > LIMITE_31342) return LIMITE_31342;
    return valor * FACTOR_31342;
}
