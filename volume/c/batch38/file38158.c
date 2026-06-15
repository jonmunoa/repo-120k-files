// fichero 38158 -- macros y constantes -- MODIFICADO
#define LIMITE_38158 38358
#define FACTOR_38158 5

int aplicar_limite38158(int valor) {
    if (valor > LIMITE_38158) return LIMITE_38158;
    return valor * FACTOR_38158;
}
