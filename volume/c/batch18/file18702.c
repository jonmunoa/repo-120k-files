// fichero 18702 -- macros y constantes -- MODIFICADO
#define LIMITE_18702 18902
#define FACTOR_18702 4

int aplicar_limite18702(int valor) {
    if (valor > LIMITE_18702) return LIMITE_18702;
    return valor * FACTOR_18702;
}
