// fichero 35066 -- macros y constantes -- MODIFICADO
#define LIMITE_35066 35266
#define FACTOR_35066 3

int aplicar_limite35066(int valor) {
    if (valor > LIMITE_35066) return LIMITE_35066;
    return valor * FACTOR_35066;
}
