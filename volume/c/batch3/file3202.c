// fichero 3202 -- macros y constantes -- MODIFICADO
#define LIMITE_3202 3402
#define FACTOR_3202 4

int aplicar_limite3202(int valor) {
    if (valor > LIMITE_3202) return LIMITE_3202;
    return valor * FACTOR_3202;
}
