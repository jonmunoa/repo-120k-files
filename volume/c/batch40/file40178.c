// fichero 40178 -- macros y constantes -- MODIFICADO
#define LIMITE_40178 40378
#define FACTOR_40178 5

int aplicar_limite40178(int valor) {
    if (valor > LIMITE_40178) return LIMITE_40178;
    return valor * FACTOR_40178;
}
