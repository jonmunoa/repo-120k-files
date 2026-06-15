// fichero 5106 -- macros y constantes -- MODIFICADO
#define LIMITE_5106 5306
#define FACTOR_5106 3

int aplicar_limite5106(int valor) {
    if (valor > LIMITE_5106) return LIMITE_5106;
    return valor * FACTOR_5106;
}
