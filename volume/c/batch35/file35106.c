// fichero 35106 -- macros y constantes -- MODIFICADO
#define LIMITE_35106 35306
#define FACTOR_35106 3

int aplicar_limite35106(int valor) {
    if (valor > LIMITE_35106) return LIMITE_35106;
    return valor * FACTOR_35106;
}
