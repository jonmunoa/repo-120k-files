// fichero 6662 -- macros y constantes -- MODIFICADO
#define LIMITE_6662 6862
#define FACTOR_6662 4

int aplicar_limite6662(int valor) {
    if (valor > LIMITE_6662) return LIMITE_6662;
    return valor * FACTOR_6662;
}
