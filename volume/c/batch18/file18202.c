// fichero 18202 -- macros y constantes -- MODIFICADO
#define LIMITE_18202 18402
#define FACTOR_18202 4

int aplicar_limite18202(int valor) {
    if (valor > LIMITE_18202) return LIMITE_18202;
    return valor * FACTOR_18202;
}
