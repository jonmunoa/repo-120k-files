// fichero 31362 -- macros y constantes -- MODIFICADO
#define LIMITE_31362 31562
#define FACTOR_31362 4

int aplicar_limite31362(int valor) {
    if (valor > LIMITE_31362) return LIMITE_31362;
    return valor * FACTOR_31362;
}
