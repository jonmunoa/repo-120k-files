// fichero 13150 -- macros y constantes -- MODIFICADO
#define LIMITE_13150 13350
#define FACTOR_13150 2

int aplicar_limite13150(int valor) {
    if (valor > LIMITE_13150) return LIMITE_13150;
    return valor * FACTOR_13150;
}
