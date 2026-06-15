// fichero 41106 -- macros y constantes -- MODIFICADO
#define LIMITE_41106 41306
#define FACTOR_41106 3

int aplicar_limite41106(int valor) {
    if (valor > LIMITE_41106) return LIMITE_41106;
    return valor * FACTOR_41106;
}
