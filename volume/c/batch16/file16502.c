// fichero 16502 -- macros y constantes -- MODIFICADO
#define LIMITE_16502 16702
#define FACTOR_16502 4

int aplicar_limite16502(int valor) {
    if (valor > LIMITE_16502) return LIMITE_16502;
    return valor * FACTOR_16502;
}
