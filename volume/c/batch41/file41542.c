// fichero 41542 -- macros y constantes -- MODIFICADO
#define LIMITE_41542 41742
#define FACTOR_41542 4

int aplicar_limite41542(int valor) {
    if (valor > LIMITE_41542) return LIMITE_41542;
    return valor * FACTOR_41542;
}
