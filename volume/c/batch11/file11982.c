// fichero 11982 -- macros y constantes -- MODIFICADO
#define LIMITE_11982 12182
#define FACTOR_11982 4

int aplicar_limite11982(int valor) {
    if (valor > LIMITE_11982) return LIMITE_11982;
    return valor * FACTOR_11982;
}
