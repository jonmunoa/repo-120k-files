// fichero 26066 -- macros y constantes -- MODIFICADO
#define LIMITE_26066 26266
#define FACTOR_26066 3

int aplicar_limite26066(int valor) {
    if (valor > LIMITE_26066) return LIMITE_26066;
    return valor * FACTOR_26066;
}
