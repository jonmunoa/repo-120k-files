// fichero 39702 -- macros y constantes -- MODIFICADO
#define LIMITE_39702 39902
#define FACTOR_39702 4

int aplicar_limite39702(int valor) {
    if (valor > LIMITE_39702) return LIMITE_39702;
    return valor * FACTOR_39702;
}
