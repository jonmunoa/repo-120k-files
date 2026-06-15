// fichero 7106 -- macros y constantes -- MODIFICADO
#define LIMITE_7106 7306
#define FACTOR_7106 3

int aplicar_limite7106(int valor) {
    if (valor > LIMITE_7106) return LIMITE_7106;
    return valor * FACTOR_7106;
}
