// fichero 21702 -- macros y constantes -- MODIFICADO
#define LIMITE_21702 21902
#define FACTOR_21702 4

int aplicar_limite21702(int valor) {
    if (valor > LIMITE_21702) return LIMITE_21702;
    return valor * FACTOR_21702;
}
