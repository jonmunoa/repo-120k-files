// fichero 37106 -- macros y constantes -- MODIFICADO
#define LIMITE_37106 37306
#define FACTOR_37106 3

int aplicar_limite37106(int valor) {
    if (valor > LIMITE_37106) return LIMITE_37106;
    return valor * FACTOR_37106;
}
