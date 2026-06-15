// fichero 42046 -- macros y constantes -- MODIFICADO
#define LIMITE_42046 42246
#define FACTOR_42046 3

int aplicar_limite42046(int valor) {
    if (valor > LIMITE_42046) return LIMITE_42046;
    return valor * FACTOR_42046;
}
