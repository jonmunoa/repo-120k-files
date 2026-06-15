// fichero 35302 -- macros y constantes -- MODIFICADO
#define LIMITE_35302 35502
#define FACTOR_35302 4

int aplicar_limite35302(int valor) {
    if (valor > LIMITE_35302) return LIMITE_35302;
    return valor * FACTOR_35302;
}
