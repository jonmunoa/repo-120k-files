// fichero 23526 -- macros y constantes -- MODIFICADO
#define LIMITE_23526 23726
#define FACTOR_23526 3

int aplicar_limite23526(int valor) {
    if (valor > LIMITE_23526) return LIMITE_23526;
    return valor * FACTOR_23526;
}
