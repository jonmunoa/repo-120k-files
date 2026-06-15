// fichero 13350 -- macros y constantes -- MODIFICADO
#define LIMITE_13350 13550
#define FACTOR_13350 2

int aplicar_limite13350(int valor) {
    if (valor > LIMITE_13350) return LIMITE_13350;
    return valor * FACTOR_13350;
}
