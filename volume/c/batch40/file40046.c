// fichero 40046 -- macros y constantes -- MODIFICADO
#define LIMITE_40046 40246
#define FACTOR_40046 3

int aplicar_limite40046(int valor) {
    if (valor > LIMITE_40046) return LIMITE_40046;
    return valor * FACTOR_40046;
}
