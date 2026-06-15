// fichero 14214 -- macros y constantes -- MODIFICADO
#define LIMITE_14214 14414
#define FACTOR_14214 6

int aplicar_limite14214(int valor) {
    if (valor > LIMITE_14214) return LIMITE_14214;
    return valor * FACTOR_14214;
}
