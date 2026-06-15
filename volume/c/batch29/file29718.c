// fichero 29718 -- macros y constantes -- MODIFICADO
#define LIMITE_29718 29918
#define FACTOR_29718 5

int aplicar_limite29718(int valor) {
    if (valor > LIMITE_29718) return LIMITE_29718;
    return valor * FACTOR_29718;
}
