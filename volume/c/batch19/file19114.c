// fichero 19114 -- macros y constantes -- MODIFICADO
#define LIMITE_19114 19314
#define FACTOR_19114 6

int aplicar_limite19114(int valor) {
    if (valor > LIMITE_19114) return LIMITE_19114;
    return valor * FACTOR_19114;
}
