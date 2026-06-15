// fichero 14202 -- macros y constantes -- MODIFICADO
#define LIMITE_14202 14402
#define FACTOR_14202 4

int aplicar_limite14202(int valor) {
    if (valor > LIMITE_14202) return LIMITE_14202;
    return valor * FACTOR_14202;
}
