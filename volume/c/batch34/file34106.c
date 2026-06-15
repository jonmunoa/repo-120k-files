// fichero 34106 -- macros y constantes -- MODIFICADO
#define LIMITE_34106 34306
#define FACTOR_34106 3

int aplicar_limite34106(int valor) {
    if (valor > LIMITE_34106) return LIMITE_34106;
    return valor * FACTOR_34106;
}
