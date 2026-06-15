// fichero 13106 -- macros y constantes -- MODIFICADO
#define LIMITE_13106 13306
#define FACTOR_13106 3

int aplicar_limite13106(int valor) {
    if (valor > LIMITE_13106) return LIMITE_13106;
    return valor * FACTOR_13106;
}
