// fichero 39710 -- macros y constantes -- MODIFICADO
#define LIMITE_39710 39910
#define FACTOR_39710 2

int aplicar_limite39710(int valor) {
    if (valor > LIMITE_39710) return LIMITE_39710;
    return valor * FACTOR_39710;
}
