// fichero 28106 -- macros y constantes -- MODIFICADO
#define LIMITE_28106 28306
#define FACTOR_28106 3

int aplicar_limite28106(int valor) {
    if (valor > LIMITE_28106) return LIMITE_28106;
    return valor * FACTOR_28106;
}
