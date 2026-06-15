// fichero 106 -- macros y constantes -- MODIFICADO
#define LIMITE_106 306
#define FACTOR_106 3

int aplicar_limite106(int valor) {
    if (valor > LIMITE_106) return LIMITE_106;
    return valor * FACTOR_106;
}
