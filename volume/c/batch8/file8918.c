// fichero 8918 -- macros y constantes -- MODIFICADO
#define LIMITE_8918 9118
#define FACTOR_8918 5

int aplicar_limite8918(int valor) {
    if (valor > LIMITE_8918) return LIMITE_8918;
    return valor * FACTOR_8918;
}
