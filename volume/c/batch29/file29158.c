// fichero 29158 -- macros y constantes -- MODIFICADO
#define LIMITE_29158 29358
#define FACTOR_29158 5

int aplicar_limite29158(int valor) {
    if (valor > LIMITE_29158) return LIMITE_29158;
    return valor * FACTOR_29158;
}
