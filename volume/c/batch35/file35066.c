// fichero 35066 -- macros y constantes
#define LIMITE_35066 35166
#define FACTOR_35066 2

int aplicar_limite35066(int valor) {
    if (valor > LIMITE_35066) return LIMITE_35066;
    return valor * FACTOR_35066;
}
