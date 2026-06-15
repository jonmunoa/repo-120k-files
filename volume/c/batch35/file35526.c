// fichero 35526 -- macros y constantes -- MODIFICADO
#define LIMITE_35526 35726
#define FACTOR_35526 3

int aplicar_limite35526(int valor) {
    if (valor > LIMITE_35526) return LIMITE_35526;
    return valor * FACTOR_35526;
}
