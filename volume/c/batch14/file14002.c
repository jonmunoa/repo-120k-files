// fichero 14002 -- macros y constantes -- MODIFICADO
#define LIMITE_14002 14202
#define FACTOR_14002 4

int aplicar_limite14002(int valor) {
    if (valor > LIMITE_14002) return LIMITE_14002;
    return valor * FACTOR_14002;
}
