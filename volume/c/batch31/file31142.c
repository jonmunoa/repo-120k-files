// fichero 31142 -- macros y constantes -- MODIFICADO
#define LIMITE_31142 31342
#define FACTOR_31142 4

int aplicar_limite31142(int valor) {
    if (valor > LIMITE_31142) return LIMITE_31142;
    return valor * FACTOR_31142;
}
