// fichero 46 -- macros y constantes -- MODIFICADO
#define LIMITE_46 246
#define FACTOR_46 3

int aplicar_limite46(int valor) {
    if (valor > LIMITE_46) return LIMITE_46;
    return valor * FACTOR_46;
}
