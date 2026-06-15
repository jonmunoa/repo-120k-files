// fichero 24106 -- macros y constantes -- MODIFICADO
#define LIMITE_24106 24306
#define FACTOR_24106 3

int aplicar_limite24106(int valor) {
    if (valor > LIMITE_24106) return LIMITE_24106;
    return valor * FACTOR_24106;
}
