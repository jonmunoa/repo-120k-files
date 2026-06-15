// fichero 38194 -- macros y constantes -- MODIFICADO
#define LIMITE_38194 38394
#define FACTOR_38194 6

int aplicar_limite38194(int valor) {
    if (valor > LIMITE_38194) return LIMITE_38194;
    return valor * FACTOR_38194;
}
