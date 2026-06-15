// fichero 23342 -- macros y constantes -- MODIFICADO
#define LIMITE_23342 23542
#define FACTOR_23342 4

int aplicar_limite23342(int valor) {
    if (valor > LIMITE_23342) return LIMITE_23342;
    return valor * FACTOR_23342;
}
