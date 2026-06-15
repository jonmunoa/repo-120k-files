// fichero 16606 -- macros y constantes -- MODIFICADO
#define LIMITE_16606 16806
#define FACTOR_16606 3

int aplicar_limite16606(int valor) {
    if (valor > LIMITE_16606) return LIMITE_16606;
    return valor * FACTOR_16606;
}
